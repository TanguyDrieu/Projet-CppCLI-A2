#pragma once
#include"CLIENT.h"
#include"Functions.h"
#include"ADRESSE.h"
#include"PERSONNEL.h"
#include"COMMANDES.h"
#include"PRODUITS.h"
#include"NATURE.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_Svc {
	ref class gestion
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CLIENT^ client;
		NS_Composants::PERSONNEL^ personnel;
		NS_Composants::ADRESSE^ adresse;
		NS_Composants::COMMANDES^ commande;
		NS_Composants::PRODUITS^ produit;
		NS_Composants::NATURE^ nature;
		DataSet^ ds;
		

	public:
		gestion();
		DataSet^ listeClient(String^);
		DataSet^ listePersonnel(String^);
		DataSet^ listeAdresse(String^);
		DataSet^ listeCommande(String^); 
		
		int ajouterClient(String^, String^, String^, String^);
		void modifier(int, String^, String^, String^, String^);
		void supprimer(int);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int ajouterPersonnel(String^, String^, String^, String^);
		void modifierPersonnel(int, String^, String^, String^, String^);
		void supprimerPersonnel(int);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int ajouterAdresse(String^, String^, String^);
		void modifierAdresse(int, String^, String^, String^);
		void supprimerAdresse(int);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int ajouterCommande(String^, String^, String^, String^, String^, String^, String^);
		void modifierCommande(int, String^, String^, String^, String^, String^, String^, String^);
		void supprimerCommande(int);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int ajouterProduit(String^, String^, String^, String^, String^);
		void modifierProduit(int, String^, String^, String^, String^, String^);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int ajouterNature(String^);
		void modifierNature(int, String^);


	};
}
