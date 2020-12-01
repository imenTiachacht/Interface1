#include "Cl_stock.h"
namespace NS_Composants {


	Cl_stock::Cl_stock() {
		this->ID = -1;
		this->nomAR = "Rien";
			this->couleurAR = "Rien";
			this->natureAR = "Rien";
			this->prixHTAR = 0;
			this->qantiterAR = 0;
			this->prixTVA = 0;
			this->prixTTC = 0;
				this->seul_de_reappro= "Rien";
	};

	String^ Cl_stock::SELECT(void) {
		/*return "SELECT id_adresse, adresse, ville, cp, id_personne " +
			"FROM TB_ADRESSE " +
			"WHERE(id_personne = " + this->id_personne + ");"; */
	};
	String^ Cl_stock::INSERT(void) {
		/*
			return "INSERT INTO TB_ADRESSE(adresse, ville, cp, id_personne) " +
			"VALUES('" + this->adresse + "', '" + this->ville + "', '" + this->cp + "', " + this->id_personne + ");"; */

	};
	String^ Cl_stock::UPDATE(void) {
		/*
			return "UPDATE TB_ADRESSE " +
			"SET adresse ='" + this->adresse + "', ville ='" + this->ville + "', cp ='" + this->cp + "' " +
			"WHERE(id_adresse = " + this->id_adresse + "); "; */

	};
	String^ Cl_stock::DELETE(void) {
		/*
			return "DELETE FROM TB_ADRESSE " +
				"WHERE(id_adresse = " + this->id_adresse + ");"; */
	}
	void Cl_stock::setID(int)
	{
		// this->ID_client = ID_client;
	}
	
	void Cl_stock::setnomAR(String^)
	{
		// this->ID_client = ID_client;
	}
	
	void Cl_stock::setcouleurAR(String^)
	{
		// this->ID_client = ID_client;
	}
	
	void Cl_stock::setnatureAR(String^)
	{
		// this->ID_client = ID_client;
	}
	void Cl_stock::setqantiterAR(int)
	{
		// this->ID_client = ID_client;
	}
	void Cl_stock::setprixHTAR(float)
	{
		// this->ID_client = ID_client;
	}
	void Cl_stock::setprixTVA(float)
	{
		// this->ID_client = ID_client;
	}
	void Cl_stock::setprixTTC(float)
	{
		// this->ID_client = ID_client;
	}
	void Cl_stock::setseul_de_reappro(String^)
	{
		// this->ID_client = ID_client;
	}
	int Cl_stock::getID()
	{
		//return this->ID;
	}
	String^ Cl_stock::getnomAR()
	{
		//return this->nomAR;
	}
	String^ Cl_stock::getcouleurAR()
	{
		//return this->couleurAR;
	}
	String^ Cl_stock::getnatureAR()
	{
		//return this->natureAR;
	}
	float Cl_stock::getprixHTAR()
	{
		//return this->prixHTAR;
	}
	float Cl_stock::getprixTVA()
	{
		//return this->prixTVA;
	}
	float Cl_stock::getprixTTC()
	{
		//return this->prixTTC;
	}
	int Cl_stock::getqantiterAR()
	{
		//return this->qantiterAR;
	}
	String^ Cl_stock::getseul_de_reappro()
	{
		//return this->seul_de_reappro;
	}
	;
	


}


