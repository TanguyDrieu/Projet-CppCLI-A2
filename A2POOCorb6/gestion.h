#pragma once
#include"CLIENT.h"
#include"Functions.h"
#include"ADRESSE.h"
#include"PERSONNEL.h"
#include"COMMANDES.h"
#include"PRODUITS.h"
#include"NATURE.h"
#include"MODE_REGLEMENT.h"
#include"PAIEMENT.h"
#include"COULEUR.h"
#include"TARIF.h"

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
		NS_Composants::MODE_REGLEMENTS^ reglement;
		NS_Composants::PAIEMENT^ paiement;
		NS_Composants::COULEUR^ couleur;
		NS_Composants::TARIF^ tarif;
		DataSet^ ds;
		

	public:
		gestion();
		DataSet^ listeClient(String^);
		DataSet^ listePersonnel(String^);
		DataSet^ listePersonnelAdresse(String^);
		DataSet^ listeAdresse(String^);
		DataSet^ listeCommande(String^); 
		DataSet^ listeClientAdresse(String^);
		DataSet^ listeReglement(String^);
		DataSet^ listePaiement(String^);
		DataSet^ listeCouleur(String^);
		DataSet^ listeTarif(String^);
		
		int ajouterClient(String^, String^, String^, String^);
		void modifierClient(int, String^, String^, String^, String^);
		void supprimerClient(int);

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
		void supprimerProduit(int);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int ajouterNature(String^);
		void modifierNature(int, String^);
		void supprimerNature(int);

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int ajouterMode(String^);
		void modifierMode(int, String^);

		//////////////////////////////////////////////////////////////////////////////////////////////////////////////		

		int ajouterCouleur(String^);
		void modifierCouleur(int, String^);

		//////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int ajouterPaiement(String^, String^);
		void modifierPaiement(int, String^, String^);

////////////////////////////////////////////////////////////////////////////////////////////////////

		int ajouterTarif(String^);
		void modifierTarif(int, String^);
		void supprimerTarif(int);



	};
}
