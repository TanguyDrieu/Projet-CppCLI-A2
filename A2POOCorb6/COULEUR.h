#pragma once

using namespace System;
namespace NS_Composants {




	ref class COULEUR
	{

	private:
		int ID_COULEUR;
		String^ NOM_COULEUR;


	public:
		COULEUR();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);


		void setNOM_COULEUR(String^);
		void setID_COULEUR(int);


		String^ getNOM_COULEUR(void);
		int getID_COULEUR(void);



	};
}