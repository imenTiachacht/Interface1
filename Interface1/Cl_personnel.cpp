#include "Cl_personnel.h"
void Cl_personnel::afficher()
{
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("SELCET * FROM personnel", conDataBase);

	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
}
void Cl_personnel::modifier()
{
	//lecture du element du formulaire ?! 
	//requete sql (ecraser les donn�es de la personne ) 
	//ajout dans Vector 
}

void Cl_personnel::ajouter()
{
	//lecture de l'element du formulaire ?! 
	//requete sql (ajouter l'element dans la base de donn�es ) 
	//ajout dans Vector 



	
}
void Cl_personnel::supprimer()
{//lecture de l'element du formulaire ?! 
	//requete sql (suppression personne ) 
	//ajout dans Vector 
}