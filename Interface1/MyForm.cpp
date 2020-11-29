#include "MyForm.h"
#include <iostream>
#include "Commande.h"
#include "Client.h"
#include "Stock.h"
#include "Personnel.h"

using namespace System;
using namespace System::Windows::Forms;



[STAThread]



void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Interface1::MyForm form;
    Application::Run(% form);





};