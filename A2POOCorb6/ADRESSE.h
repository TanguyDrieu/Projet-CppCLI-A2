#pragma once
using namespace System;
namespace NS_Composants {




	ref class ADRESSE
	{

	private:
		
		int ID_ADRESSE;
		String^ RUE;
		String^ CODE_POSTAL;
		String^ VILLE;


	public:
		ADRESSE();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setRUE(String^);
		void setCODE_POSTAL(String^);
		void setVILLE(String^);
		
		void setID_ADRESSE(int);
		String^ getRUE(void);
		String^ getCODE_POSTAL(void);
		String^ getVILLE(void);
		
		int getID_ADRESSE(void);



	};
}