#pragma once

using namespace System;
namespace NS_Composants {




	ref class NATURE
	{

	private:
		int ID_NATURE;
		String^ INTITULE_NATURE;
	

	public:
		NATURE();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);


		void setINTITULE_NATURE(String^);
		void setID_NATURE(int);


		String^ getINTITULE_NATURE(void);
		int getID_NATURE(void);



	};
}