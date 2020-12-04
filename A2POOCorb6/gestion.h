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
#include"CONTENIR.h"

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
		NS_Composants::CONTENIR^ contenir;
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
		DataSet^ listeProduits(String^);
		DataSet^ listeProdNatTar(String^);
		
		
		int ajouterClient(String^, String^, String^, String^, String^, int, String^, String^, int, String^);
		void modifierClient(int, String^, String^, String^, String^);
		void supprimerClient(int);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int ajouterPersonnel(int, String^, String^, String^, String^, String^, int, String^);
		void modifierPersonnel(int, String^, String^, String^, String^);
		void supprimerPersonnel(int);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int ajouterAdresse(String^, int, String^);
		void modifierAdresse(int, String^, int, String^);
		void supprimerAdresse(int);
		void supprimerAdresseClient(int);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int ajouterCommande(String^ , String^ , String^ , String^ , int , int , int, String^ , int , String^ , String^ , int );
		//void modifierCommande(String^, String^, String^, String^, String^, String^, String^, String^);
		void supprimerCommande(String^);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

		void ajouterProduit(String^, int, int, String^, String^, int, int, String^);
		void ajouterProdNatTar(String^, String^, String^, int, int, String^, int, String^, int, String^, String^);
		void modifierProduit(String^, int, int, String^, String^, int, int, String^);
		void supprimerProduit(String^);

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
		//void modifierPaiement(int, String^, String^);

////////////////////////////////////////////////////////////////////////////////////////////////////

		int ajouterTarif(String^);
		void modifierTarif(int, String^);
		void supprimerTarif(int);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	

	};
}
