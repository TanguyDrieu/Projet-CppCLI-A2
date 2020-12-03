#include "Functions.h"
namespace NS_Composants
{
	CL_CAD::CL_CAD(void)
	{
	this->rq_sql = "RIEN";
	connStrinfBuilder = gcnew SqlConnectionStringBuilder();
	connStrinfBuilder->DataSource = "VICTORIEN";
	connStrinfBuilder->InitialCatalog = "PROJET_CASTORAMA";
	connStrinfBuilder->IntegratedSecurity = true;


	this->CNX = gcnew SqlConnection(Convert::ToString(connStrinfBuilder));
		//this->cnx = "Data Source=VICTORIEN;" +
		//	"Initial Catalog=tanguy;" +
		//	"IntegratedSecurity = true";
			
			
		//this->CNX = gcnew SqlConnection(this->cnx);
		this->CMD = gcnew SqlCommand(this->rq_sql, this->CNX);
		this->CMD->CommandType = CommandType::Text;
	}
	int CL_CAD::actionRowsID(String^ rq_sql)
	{
		int id;
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
		id = Convert::ToInt32(this->CMD->ExecuteScalar());
		this->CNX->Close();
		return id;
	}
	void CL_CAD::actionRows(String^ rq_sql)
	{
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
		this->CMD->ExecuteNonQuery();
		this->CNX->Close();
	}
	DataSet^ CL_CAD::getRows(String^ rq_sql, String^ dataTableName)
	{
		this->setSQL(rq_sql);
		this->DA = gcnew SqlDataAdapter(this->CMD);
		this->CMD->CommandText = this->rq_sql;
		this->DS = gcnew DataSet();
		this->DA->Fill(this->DS, dataTableName);

		return this->DS;
	}
	void CL_CAD::setSQL(String^ rq_sql)
	{
		if (rq_sql == "" || rq_sql == "RIEN")
		{
			this->rq_sql = "RIEN";
		}
		else
		{
			this->rq_sql = rq_sql;
		}
	}
}