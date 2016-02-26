#pragma once

#include <Windows.h>

namespace iServices {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(49, 50);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(67, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"iServices Manager";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 117);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Apple Mobile Device";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(154, 117);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Start";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Stop";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(154, 146);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Stop";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(191, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 15);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Bonjour";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(53, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Running";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(194, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Running";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 179);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"iServices Manager";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 const DWORD access = SC_MANAGER_ALL_ACCESS;
				 SC_HANDLE handle = OpenSCManager(NULL, NULL, access);
				 SC_HANDLE shandle = OpenService(handle, L"Apple Mobile Device", access);
				 SERVICE_STATUS status;
				 QueryServiceStatus(shandle, &status);
				 if (status.dwCurrentState == 0x00000004){
					 this->label4->Text = L"Running";
					 this->label4->ForeColor = System::Drawing::Color::ForestGreen;
				 }
				 else{
					 this->label4->Text = L"Stopped";
					 this->label4->ForeColor = System::Drawing::Color::Red;
				 }
				 SC_HANDLE handle2 = OpenSCManager(NULL, NULL, access);
				 SC_HANDLE shandle2 = OpenService(handle2, L"Bonjour Service", access);
				 SERVICE_STATUS status2;
				 QueryServiceStatus(shandle2, &status2);
				 if (status2.dwCurrentState == 0x00000004){
					 this->label5->Text = L"Running";
					 this->label5->ForeColor = System::Drawing::Color::ForestGreen;
				 }
				 else{
					 this->label5->Text = L"Stopped";
					 this->label5->ForeColor = System::Drawing::Color::Red;
				 }

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 STARTUPINFO startinfo;
				 startinfo.cb = sizeof(STARTUPINFO);
				 PROCESS_INFORMATION pInfo;
				 ZeroMemory(&pInfo, sizeof(pInfo));
				 ZeroMemory(&startinfo, sizeof(startinfo));
				 TCHAR cmdln[500] = TEXT("net start \"Apple Mobile Device\"");
				 CreateProcess(NULL, cmdln, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS|CREATE_NO_WINDOW, NULL, NULL, &startinfo, &pInfo);
				 WaitForSingleObject(pInfo.hProcess, INFINITE);
				 CloseHandle(pInfo.hProcess);
				 CloseHandle(pInfo.hThread);
				 const DWORD access = SC_MANAGER_ALL_ACCESS;
				 SC_HANDLE handle = OpenSCManager(NULL, NULL, access);
				 SC_HANDLE shandle = OpenService(handle, L"Apple Mobile Device", access);
				 SERVICE_STATUS status;
				 QueryServiceStatus(shandle, &status);
				 if (status.dwCurrentState == 0x00000004){
					 this->label4->Text = L"Running";
					 this->label4->ForeColor = System::Drawing::Color::ForestGreen;
				 }
				 else{
					 this->label4->Text = L"Stopped";
					 this->label4->ForeColor = System::Drawing::Color::Red;
				 }
				 return;
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 STARTUPINFO startinfo;
			 startinfo.cb = sizeof(STARTUPINFO);
			 PROCESS_INFORMATION pInfo;
			 ZeroMemory(&pInfo, sizeof(pInfo));
			 ZeroMemory(&startinfo, sizeof(startinfo));
			 TCHAR cmdln[500] = TEXT("net stop \"Apple Mobile Device\"");
			 CreateProcess(NULL, cmdln, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS | CREATE_NO_WINDOW, NULL, NULL, &startinfo, &pInfo);
			 WaitForSingleObject(pInfo.hProcess, INFINITE);
			 CloseHandle(pInfo.hProcess);
			 CloseHandle(pInfo.hThread);
			 const DWORD access = SC_MANAGER_ALL_ACCESS;
			 SC_HANDLE handle = OpenSCManager(NULL, NULL, access);
			 SC_HANDLE shandle = OpenService(handle, L"Apple Mobile Device", access);
			 SERVICE_STATUS status;
			 QueryServiceStatus(shandle, &status);
			 if (status.dwCurrentState == 0x00000004){
				 this->label4->Text = L"Running";
				 this->label4->ForeColor = System::Drawing::Color::ForestGreen;
			 }
			 else{
				 this->label4->Text = L"Stopped";
				 this->label4->ForeColor = System::Drawing::Color::Red;
			 }
			 return;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 STARTUPINFO startinfo;
			 startinfo.cb = sizeof(STARTUPINFO);
			 PROCESS_INFORMATION pInfo;
			 ZeroMemory(&pInfo, sizeof(pInfo));
			 ZeroMemory(&startinfo, sizeof(startinfo));
			 TCHAR cmdln[500] = TEXT("net start \"Bonjour Service\"");
			 CreateProcess(NULL, cmdln, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS | CREATE_NO_WINDOW, NULL, NULL, &startinfo, &pInfo);
			 WaitForSingleObject(pInfo.hProcess, INFINITE);
			 CloseHandle(pInfo.hProcess);
			 CloseHandle(pInfo.hThread);
			 const DWORD access = SC_MANAGER_ALL_ACCESS;
			 SC_HANDLE handle2 = OpenSCManager(NULL, NULL, access);
			 SC_HANDLE shandle2 = OpenService(handle2, L"Bonjour Service", access);
			 SERVICE_STATUS status2;
			 QueryServiceStatus(shandle2, &status2);
			 if (status2.dwCurrentState == 0x00000004){
				 this->label5->Text = L"Running";
				 this->label5->ForeColor = System::Drawing::Color::ForestGreen;
			 }
			 else{
				 this->label5->Text = L"Stopped";
				 this->label5->ForeColor = System::Drawing::Color::Red;
			 }
			 return;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 STARTUPINFO startinfo;
			 startinfo.cb = sizeof(STARTUPINFO);
			 PROCESS_INFORMATION pInfo;
			 ZeroMemory(&pInfo, sizeof(pInfo));
			 ZeroMemory(&startinfo, sizeof(startinfo));
			 TCHAR cmdln[500] = TEXT("net stop \"Bonjour Service\"");
			 CreateProcess(NULL, cmdln, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS | CREATE_NO_WINDOW, NULL, NULL, &startinfo, &pInfo);
			 WaitForSingleObject(pInfo.hProcess, INFINITE);
			 CloseHandle(pInfo.hProcess);
			 CloseHandle(pInfo.hThread);
			 const DWORD access = SC_MANAGER_ALL_ACCESS;
			 SC_HANDLE handle2 = OpenSCManager(NULL, NULL, access);
			 SC_HANDLE shandle2 = OpenService(handle2, L"Bonjour Service", access);
			 SERVICE_STATUS status2;
			 QueryServiceStatus(shandle2, &status2);
			 if (status2.dwCurrentState == 0x00000004){
				 this->label5->Text = L"Running";
				 this->label5->ForeColor = System::Drawing::Color::ForestGreen;
			 }
			 else{
				 this->label5->Text = L"Stopped";
				 this->label5->ForeColor = System::Drawing::Color::Red;
			 }
			 return;
		 }
};
}

