#pragma once
#include"CLIENT.h"
#include"Functions.h"
#include"ADRESSE.h"
#include"PERSONNEL.h"
#include"COMMANDES.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_Svc {
	ref class gestion
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CLIENT^ personne;
		NS_Composants::PERSONNEL^ personnel;
		NS_Composants::ADRESSE^ adresse;
		NS_Composants::COMMANDES^ commande;
		DataSet^ ds;


	public:
		gestion();
		DataSet^ listePersonnes(String^);
		DataSet^ listePersonnel(String^);
		DataSet^ listeAdresse(String^);
		DataSet^ listeCommande(String^); 
		
		int ajouter(String^, String^, String^, String^);
		void modifier(int, String^, String^, String^, String^);
		void supprimer(int);


		int ajouterPersonnel(String^, String^, String^, String^);
		void modifierPersonnel(int, String^, String^, String^, String^);
		void supprimerPersonnel(int);


		int ajouterAdresse(String^, String^, String^);
		void modifierAdresse(int, String^, String^, String^);
		void supprimerAdresse(int);

		int ajouterCommande(String^, String^, String^, String^, String^, String^, String^);
		void modifierCommande(int, String^, String^, String^, String^, String^, String^, String^);
		void supprimerCommande(int);





	};
}
