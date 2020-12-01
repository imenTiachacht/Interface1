#pragma once
using namespace System;


/// <summary>
namespace NS_Composants
{
	ref class Cl_personnel
	{
	private: 
		int ID_personnel;
		String^ nomPER;
		String^ prenomPER;
		String^ supH;
		String^ DateAmb;
	public: 
		Cl_personnel(void);
		String^ SELECTByIdPersonne(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setId_personnel(int);
		void setNomPER(String^);
		void setPrenomPER(String^);
		void setSupH(String^);
		void setDateAmb(String^);
		int getId_personnel(void);
		String^ getNomPER( void);
		String^ getPrenomPER(void);
		String^ getSupH(void);
		String^ getDateAmb(void);

	};

}