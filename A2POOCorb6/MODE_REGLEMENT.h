#pragma once

using namespace System;
namespace NS_Composants {




	ref class MODE_REGLEMENTS
	{

	private:
		int ID_MODE;
		String^ MODE_REGLEMENT;


	public:
		MODE_REGLEMENTS();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);


		void setMODE_REGLEMENT(String^);
		void setID_MODE(int);


		String^ getMODE_REGLEMENT(void);
		int getID_MODE(void);



	};
}