#pragma once

using namespace System;
namespace NS_Composants {




	ref class CLIENT
	{

	private:
		int ID_CLIENT;
		String^ NOM_CLIENT;
		String^ PRENOM_CLIENT;
		String^ DATE_NAISSANCE_CLIENT;
		String^ DATE_PREMIERE_COMMANDE_CLIENT;

	public:
		CLIENT();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setPRENOM_CLIENT(String^);
		void setNOM_CLIENT(String^);
		void setDATE_NAISSANCE_CLIENT(String^);
		void setDATE_PREMIERE_COMMANDE_CLIENT(String^);
		void setID(int);
		String^ getNOM_CLIENT(void);
		String^ getPRENOM_CLIENT(void);
		String^ getDATE_NAISSANCE_CLIENT(void);
		String^ getDATE_PREMIERE_COMMANDE_CLIENT(void);
		int getId(void);



	};
}
