#include "Cl_personnel.h"
namespace NS_Composants
{
	Cl_personnel::Cl_personnel() {
		this->ID_personnel = -1;
		this->nomPER = "RIEN";
		this->prenomPER = "RIEN";
		this->supH = "RIEN";
		this->DateAmb = "RIEN";
	}
	String^ Cl_personnel::SELECTByIdPersonne(void)
	{
		/*return "SELECT id_adresse, adresse, ville, cp, id_personne " +
				"FROM TB_ADRESSE " +
				"WHERE(id_personne = " + this->id_personne + ");"; */
	};
	String^ Cl_personnel::INSERT(void)
	{
		/*
		return "INSERT INTO TB_ADRESSE(adresse, ville, cp, id_personne) " +
			"VALUES('" + this->adresse + "', '" + this->ville + "', '" + this->cp + "', " + this->id_personne + ");";*/

	};
	String^ Cl_personnel::UPDATE(void)
	{/*
		return "UPDATE TB_ADRESSE " +
			"SET adresse ='" + this->adresse + "', ville ='" + this->ville + "', cp ='" + this->cp + "' " +
			"WHERE(id_adresse = " + this->id_adresse + "); "; */
	

	};
	String^ Cl_personnel::DELETE(void)
	{
		/*
				return "DELETE FROM TB_ADRESSE " +
					"WHERE(id_adresse = " + this->id_adresse + ");"; */
	}
	void Cl_personnel::setId_personnel(int)
	{
		// this->ID_client = ID_client;
	}
	void Cl_personnel::setNomPER(String^)
	{
		// this->ID_client = ID_client;
	}
	void Cl_personnel::setPrenomPER(String^)
	{
		// this->ID_client = ID_client;
	}
	void Cl_personnel::setSupH(String^)
	{
		// this->ID_client = ID_client;
	}
	void Cl_personnel::setDateAmb(String^)
	{
		// this->ID_client = ID_client;
	}
	int Cl_personnel::getId_personnel(void)
	{
		//return this->Id_personnel;
	}
	String^ Cl_personnel::getNomPER(void)
	{
		//return this->NomPER;
	}
	String^ Cl_personnel::getPrenomPER(void)
	{
		//return this->PrenomPER;
	}
	String^ Cl_personnel::getSupH(void)
	{
		//return this->SupH;
	}
	String^ Cl_personnel::getDateAmb(void)
	{
		//return this->DateAmb;
	}
	;






}