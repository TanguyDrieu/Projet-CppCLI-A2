#pragma once

using namespace System;
namespace NS_Composants {




	ref class PERSONNEL
	{

	private:
		int ID_PERSONNEL;
		int ID_ADRESSE;
		String^ NOM_PERSONNEL;
		String^ PRENOM_PERSONNEL;
		String^ ADRESSE_MAIL_PERSONNEL;
		String^ DATE_EMBAUCHE;

	public:
		PERSONNEL();
		String^ SELECT(void);
		String^ SELECTPERSONNELADRESSE(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setNOM_PERSONNEL(String^);
		void setPRENOM_PERSONNEL(String^);
		void setADRESSE_MAIL_PERSONNEL(String^);
		void setDATE_EMBAUCHE(String^);
		void setID_PERSONNEL(int);
		String^ getNOM_PERSONNEL(void);
		String^ getPRENOM_PERSONNEL(void);
		String^ getADRESSE_MAIL_PERSONNEL(void);
		String^ getDATE_EMBAUCHE(void);
		int getID_PERSONNEL(void);



	};
}
