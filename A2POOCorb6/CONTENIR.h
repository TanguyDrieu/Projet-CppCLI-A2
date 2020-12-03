#pragma once

using namespace System;
namespace NS_Composants {




	ref class CONTENIR
	{

	private:
		
		int QUANTITE_ARTICLE;


	public:
		CONTENIR();
		String^ SELECT(void);
		String^ INSERT(void);
		

		void setQUANTITE_ARTICLE(int);
	

		double getQUANTITE_ARTICLE(void);
		



	};
}