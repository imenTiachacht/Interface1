#pragma once
#include "Identification.h"
#include "Calcul2.h"
namespace Interface1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Statistique
	/// </summary>
	public ref class Statistique : public System::Windows::Forms::Form
	{
	public:
		Statistique(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Statistique()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Statistique::typeid));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button5->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->button5->Location = System::Drawing::Point(170, 329);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 46);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Quitter";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Statistique::button5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(50, 140);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 51);
			this->button1->TabIndex = 6;
			this->button1->Text = L"caclul";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Statistique::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(293, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 51);
			this->button2->TabIndex = 7;
			this->button2->Text = L"identification";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Statistique::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(170, 258);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 40);
			this->button3->TabIndex = 8;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// Statistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(466, 428);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Name = L"Statistique";
			this->Text = L"Statistique";
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Calcul2^ J = gcnew Calcul2;
	J->Show(); 
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Identification^ T = gcnew Identification; 
	T->Show(); 
}
};
}
