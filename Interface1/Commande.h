#pragma once

namespace Interface1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Commande
	/// </summary>
	public ref class Commande : public System::Windows::Forms::Form
	{
	public:
		Commande(void)
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
		~Commande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Commande::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button1->Location = System::Drawing::Point(73, 260);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Afficher ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Commande::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(306, 33);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 45);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Commande::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(23, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 45);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Commande::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Location = System::Drawing::Point(267, 291);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 45);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Ajouter";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Commande::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button5->Location = System::Drawing::Point(157, 175);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(107, 49);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Quitter";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Commande::button5_Click);
			// 
			// Commande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(421, 387);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Commande";
			this->Text = L"Commande";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("     vous ne pouvez pas Supprimer pour le moemnt      ", "   Erreur ",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("     vous ne pouvez pas Modifier pour le moemnt      ", "   Erreur ",
		MessageBoxButtons::OK, MessageBoxIcon::Error);
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("     vous ne pouvez pas Ajouter pour le moemnt      ", "   Erreur ",
		MessageBoxButtons::OK, MessageBoxIcon::Error);
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("     vous ne pouvez pas Afficher pour le moemnt      ", "   Erreur ",
		MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close(); 
}
};
}
