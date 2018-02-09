#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:










	private: System::Windows::Forms::GroupBox^  grpAdmin;

	private: System::Windows::Forms::Button^  btnCreateEvent;
	private: System::Windows::Forms::Button^  btnViewSchedule;
	private: System::Windows::Forms::Button^  btnEditEvents;
	private: System::Windows::Forms::Button^  btnEditAvailability;
	private: System::Windows::Forms::Label^  lblAdmin;
	private: System::Windows::Forms::GroupBox^  grpUser;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  grpCreateEvent;

	private: System::Windows::Forms::Label^  lblDate;

	private: System::Windows::Forms::Label^  lblLocation;
	private: System::Windows::Forms::Label^  lblNote;




	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  lblCreateEvent;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  lblName;


	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;




	private: System::Windows::Forms::RadioButton^  rbtn12Hr;
	private: System::Windows::Forms::RadioButton^  rbtn24Hr;
	private: System::Windows::Forms::GroupBox^  grpLogin;



	private: System::Windows::Forms::Label^  lblUser;

	private: System::Windows::Forms::Button^  btnLogin;

	private: System::Windows::Forms::TextBox^  txtUser;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::GroupBox^  grpAvailability;


	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::TextBox^  textBox4;










private: System::Windows::Forms::Panel^  pnl5_6AM;

private: System::Windows::Forms::CheckBox^  chk540_600AM;
private: System::Windows::Forms::CheckBox^  chk520_540AM;
private: System::Windows::Forms::CheckBox^  chk500_520AM;
private: System::Windows::Forms::Panel^  pnl12Hr;













private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::RadioButton^  rbtn6_7AM;

private: System::Windows::Forms::RadioButton^  rbtn5_6AM;

private: System::Windows::Forms::Panel^  pnl6_7AM;

private: System::Windows::Forms::CheckBox^  chk640_700AM;
private: System::Windows::Forms::CheckBox^  chk620_640AM;
private: System::Windows::Forms::CheckBox^  chk600_620AM;
private: System::Windows::Forms::RadioButton^  rbtn7_8AM;












private: System::Windows::Forms::Panel^  pnl7_8AM;

private: System::Windows::Forms::CheckBox^  chk740_800AM;
private: System::Windows::Forms::CheckBox^  chk720_740AM;
private: System::Windows::Forms::CheckBox^  chk700_720AM;







private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::RadioButton^  rbtn11_12AM;

private: System::Windows::Forms::RadioButton^  rbtn10_11PM;

private: System::Windows::Forms::RadioButton^  rbtn9_10PM;

private: System::Windows::Forms::RadioButton^  rbtn8_9PM;

private: System::Windows::Forms::RadioButton^  rbtn7_8PM;

private: System::Windows::Forms::RadioButton^  rbtn6_7PM;

private: System::Windows::Forms::RadioButton^  rbtn5_6PM;

private: System::Windows::Forms::RadioButton^  rbtn4_5PM;

private: System::Windows::Forms::RadioButton^  rbtn3_4PM;

private: System::Windows::Forms::RadioButton^  rbtn2_3PM;

private: System::Windows::Forms::RadioButton^  rbtn1_2PM;

private: System::Windows::Forms::RadioButton^  rbtn11_12PM;

private: System::Windows::Forms::RadioButton^  rbtn10_11AM;

private: System::Windows::Forms::RadioButton^  rbtn9_10AM;

private: System::Windows::Forms::RadioButton^  rbtn8_9AM;

private: System::Windows::Forms::Panel^  pnl8_9AM;

private: System::Windows::Forms::CheckBox^  chk840_900AM;

private: System::Windows::Forms::CheckBox^  chk820_840AM;
private: System::Windows::Forms::CheckBox^  chk800_820AM;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::CheckBox^  checkBox8;
private: System::Windows::Forms::CheckBox^  checkBox9;
private: System::Windows::Forms::CheckBox^  checkBox10;
private: System::Windows::Forms::Panel^  pnl9_10AM;
private: System::Windows::Forms::CheckBox^  chk940_10000AM;
private: System::Windows::Forms::CheckBox^  chk920_940AM;
private: System::Windows::Forms::CheckBox^  chk900_920AM;


private: System::Windows::Forms::Panel^  pnl1_2PM;
private: System::Windows::Forms::Panel^  pnl11_12PM;



private: System::Windows::Forms::Panel^  pnl10_11AM;
private: System::Windows::Forms::CheckBox^  chk1040_1100AM;
private: System::Windows::Forms::CheckBox^  chk1020_1040AM;




private: System::Windows::Forms::CheckBox^  chk1000_1020AM;
private: System::Windows::Forms::CheckBox^  chk1140_1200PM;
private: System::Windows::Forms::CheckBox^  chk1120_1140AM;





private: System::Windows::Forms::CheckBox^  chk1100_1120AM;
private: System::Windows::Forms::CheckBox^  chk140_200PM;


private: System::Windows::Forms::CheckBox^  chk120_140PM;

private: System::Windows::Forms::CheckBox^  chk100_120PM;
private: System::Windows::Forms::Panel^  pnl6_7PM;
private: System::Windows::Forms::CheckBox^  chk640_700PM;
private: System::Windows::Forms::CheckBox^  chk620_640PM;
private: System::Windows::Forms::CheckBox^  chk600_620PM;
private: System::Windows::Forms::Panel^  pnl5_6PM;
private: System::Windows::Forms::CheckBox^  chk540_600PM;
private: System::Windows::Forms::CheckBox^  chk520_540PM;
private: System::Windows::Forms::CheckBox^  chk500_520PM;
private: System::Windows::Forms::Panel^  pnl4_5PM;
private: System::Windows::Forms::CheckBox^  chk440_500PM;
private: System::Windows::Forms::CheckBox^  chk420_440PM;
private: System::Windows::Forms::CheckBox^  chk400_420PM;
private: System::Windows::Forms::Panel^  pnl3_4PM;
private: System::Windows::Forms::CheckBox^  chk340_400PM;
private: System::Windows::Forms::CheckBox^  chk320_340PM;
private: System::Windows::Forms::CheckBox^  chk300_320PM;
private: System::Windows::Forms::Panel^  pnl2_3PM;
private: System::Windows::Forms::CheckBox^  chk240_300PM;
private: System::Windows::Forms::CheckBox^  chk220_240PM;
private: System::Windows::Forms::CheckBox^  chk200_220PM;
private: System::Windows::Forms::Panel^  pnl7_8PM;
private: System::Windows::Forms::CheckBox^  chk740_800PM;
private: System::Windows::Forms::CheckBox^  chk720_740PM;
private: System::Windows::Forms::CheckBox^  chk700_720PM;
private: System::Windows::Forms::Panel^  pnl8_9PM;
private: System::Windows::Forms::CheckBox^  chk840_900PM;
private: System::Windows::Forms::CheckBox^  chk820_840PM;
private: System::Windows::Forms::CheckBox^  chk800_820PM;
private: System::Windows::Forms::Panel^  pnl9_10PM;
private: System::Windows::Forms::CheckBox^  chk940_1000PM;
private: System::Windows::Forms::CheckBox^  chk920_940PM;
private: System::Windows::Forms::CheckBox^  chk900_920PM;
private: System::Windows::Forms::Panel^  pnl10_11PM;
private: System::Windows::Forms::CheckBox^  chk1040_1100PM;
private: System::Windows::Forms::CheckBox^  chk1020_1040PM;
private: System::Windows::Forms::CheckBox^  chk1000_1020PM;
private: System::Windows::Forms::Panel^  pnl11_12AM;
private: System::Windows::Forms::CheckBox^  chk1140_1200AM;


private: System::Windows::Forms::CheckBox^  chk1120_1140PM;

private: System::Windows::Forms::CheckBox^  chk1100_1120PM;
private: System::Windows::Forms::Panel^  pnl24Hr;

private: System::Windows::Forms::RadioButton^  rbtn23_00;

private: System::Windows::Forms::RadioButton^  rbtn22_23;

private: System::Windows::Forms::RadioButton^  rbtn21_22;

private: System::Windows::Forms::RadioButton^  rbtn20_21;

private: System::Windows::Forms::RadioButton^  rbtn19_20;

private: System::Windows::Forms::RadioButton^  rbtn18_19;

private: System::Windows::Forms::RadioButton^  rbtn17_18;

private: System::Windows::Forms::RadioButton^  rbtn16_17;

private: System::Windows::Forms::RadioButton^  rbtn15_16;

private: System::Windows::Forms::RadioButton^  rbtn14_15;

private: System::Windows::Forms::RadioButton^  rbtn13_14;

private: System::Windows::Forms::RadioButton^  rbtn11_12;

private: System::Windows::Forms::RadioButton^  rbtn10_11;

private: System::Windows::Forms::RadioButton^  rbtn09_10;

private: System::Windows::Forms::RadioButton^  rbtn08_09;

private: System::Windows::Forms::RadioButton^  rbtn07_08;

private: System::Windows::Forms::RadioButton^  rbtn06_07;

private: System::Windows::Forms::RadioButton^  rbtn05_06;


























	private: System::ComponentModel::IContainer^  components;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->grpCreateEvent = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->lblLocation = (gcnew System::Windows::Forms::Label());
			this->lblNote = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->lblCreateEvent = (gcnew System::Windows::Forms::Label());
			this->grpAdmin = (gcnew System::Windows::Forms::GroupBox());
			this->btnCreateEvent = (gcnew System::Windows::Forms::Button());
			this->btnViewSchedule = (gcnew System::Windows::Forms::Button());
			this->btnEditEvents = (gcnew System::Windows::Forms::Button());
			this->btnEditAvailability = (gcnew System::Windows::Forms::Button());
			this->lblAdmin = (gcnew System::Windows::Forms::Label());
			this->grpUser = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->grpLogin = (gcnew System::Windows::Forms::GroupBox());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->rbtn12Hr = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn24Hr = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->grpAvailability = (gcnew System::Windows::Forms::GroupBox());
			this->pnl24Hr = (gcnew System::Windows::Forms::Panel());
			this->rbtn23_00 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn22_23 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn21_22 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn20_21 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn19_20 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn18_19 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn17_18 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn16_17 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn15_16 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn14_15 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn13_14 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn11_12 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn10_11 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn09_10 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn08_09 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn07_08 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn06_07 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn05_06 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pnl12Hr = (gcnew System::Windows::Forms::Panel());
			this->rbtn11_12AM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn10_11PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn9_10PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn8_9PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn7_8PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn6_7PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn5_6PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn4_5PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn3_4PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn2_3PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn1_2PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn11_12PM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn10_11AM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn9_10AM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn8_9AM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn7_8AM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn6_7AM = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn5_6AM = (gcnew System::Windows::Forms::RadioButton());
			this->pnl5_6AM = (gcnew System::Windows::Forms::Panel());
			this->chk540_600AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk520_540AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk500_520AM = (gcnew System::Windows::Forms::CheckBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pnl7_8AM = (gcnew System::Windows::Forms::Panel());
			this->chk740_800AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk720_740AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk700_720AM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl1_2PM = (gcnew System::Windows::Forms::Panel());
			this->chk140_200PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk120_140PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk100_120PM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl11_12PM = (gcnew System::Windows::Forms::Panel());
			this->chk1140_1200PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk1120_1140AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk1100_1120AM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl7_8PM = (gcnew System::Windows::Forms::Panel());
			this->chk740_800PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk720_740PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk700_720PM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl6_7PM = (gcnew System::Windows::Forms::Panel());
			this->chk640_700PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk620_640PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk600_620PM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl5_6PM = (gcnew System::Windows::Forms::Panel());
			this->chk540_600PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk520_540PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk500_520PM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl4_5PM = (gcnew System::Windows::Forms::Panel());
			this->chk440_500PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk420_440PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk400_420PM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl3_4PM = (gcnew System::Windows::Forms::Panel());
			this->chk340_400PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk320_340PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk300_320PM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl8_9AM = (gcnew System::Windows::Forms::Panel());
			this->chk840_900AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk820_840AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk800_820AM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl6_7AM = (gcnew System::Windows::Forms::Panel());
			this->chk640_700AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk620_640AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk600_620AM = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->pnl10_11AM = (gcnew System::Windows::Forms::Panel());
			this->chk1040_1100AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk1020_1040AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk1000_1020AM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl9_10AM = (gcnew System::Windows::Forms::Panel());
			this->chk940_10000AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk920_940AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk900_920AM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl2_3PM = (gcnew System::Windows::Forms::Panel());
			this->chk240_300PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk220_240PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk200_220PM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl8_9PM = (gcnew System::Windows::Forms::Panel());
			this->chk840_900PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk820_840PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk800_820PM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl9_10PM = (gcnew System::Windows::Forms::Panel());
			this->chk940_1000PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk920_940PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk900_920PM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl10_11PM = (gcnew System::Windows::Forms::Panel());
			this->chk1040_1100PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk1020_1040PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk1000_1020PM = (gcnew System::Windows::Forms::CheckBox());
			this->pnl11_12AM = (gcnew System::Windows::Forms::Panel());
			this->chk1140_1200AM = (gcnew System::Windows::Forms::CheckBox());
			this->chk1120_1140PM = (gcnew System::Windows::Forms::CheckBox());
			this->chk1100_1120PM = (gcnew System::Windows::Forms::CheckBox());
			this->grpCreateEvent->SuspendLayout();
			this->grpAdmin->SuspendLayout();
			this->grpUser->SuspendLayout();
			this->grpLogin->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->grpAvailability->SuspendLayout();
			this->pnl24Hr->SuspendLayout();
			this->pnl12Hr->SuspendLayout();
			this->pnl5_6AM->SuspendLayout();
			this->pnl7_8AM->SuspendLayout();
			this->pnl1_2PM->SuspendLayout();
			this->pnl11_12PM->SuspendLayout();
			this->pnl7_8PM->SuspendLayout();
			this->pnl6_7PM->SuspendLayout();
			this->pnl5_6PM->SuspendLayout();
			this->pnl4_5PM->SuspendLayout();
			this->pnl3_4PM->SuspendLayout();
			this->pnl8_9AM->SuspendLayout();
			this->pnl6_7AM->SuspendLayout();
			this->panel2->SuspendLayout();
			this->pnl10_11AM->SuspendLayout();
			this->pnl9_10AM->SuspendLayout();
			this->pnl2_3PM->SuspendLayout();
			this->pnl8_9PM->SuspendLayout();
			this->pnl9_10PM->SuspendLayout();
			this->pnl10_11PM->SuspendLayout();
			this->pnl11_12AM->SuspendLayout();
			this->SuspendLayout();
			// 
			// grpCreateEvent
			// 
			this->grpCreateEvent->Controls->Add(this->textBox3);
			this->grpCreateEvent->Controls->Add(this->monthCalendar1);
			this->grpCreateEvent->Controls->Add(this->textBox2);
			this->grpCreateEvent->Controls->Add(this->textBox1);
			this->grpCreateEvent->Controls->Add(this->lblName);
			this->grpCreateEvent->Controls->Add(this->lblDate);
			this->grpCreateEvent->Controls->Add(this->lblLocation);
			this->grpCreateEvent->Controls->Add(this->lblNote);
			this->grpCreateEvent->Controls->Add(this->button6);
			this->grpCreateEvent->Controls->Add(this->lblCreateEvent);
			this->grpCreateEvent->Location = System::Drawing::Point(54, 82);
			this->grpCreateEvent->Name = L"grpCreateEvent";
			this->grpCreateEvent->Size = System::Drawing::Size(472, 441);
			this->grpCreateEvent->TabIndex = 8;
			this->grpCreateEvent->TabStop = false;
			this->grpCreateEvent->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(85, 359);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(227, 20);
			this->textBox3->TabIndex = 12;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(85, 100);
			this->monthCalendar1->MaximumSize = System::Drawing::Size(500, 500);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 11;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::monthCalendar1_DateChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(85, 327);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(227, 20);
			this->textBox2->TabIndex = 11;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(227, 20);
			this->textBox1->TabIndex = 10;
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(15, 63);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(38, 13);
			this->lblName->TabIndex = 9;
			this->lblName->Text = L"Name:";
			// 
			// lblDate
			// 
			this->lblDate->AutoSize = true;
			this->lblDate->Location = System::Drawing::Point(15, 100);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(33, 13);
			this->lblDate->TabIndex = 6;
			this->lblDate->Text = L"Date:";
			// 
			// lblLocation
			// 
			this->lblLocation->AutoSize = true;
			this->lblLocation->Location = System::Drawing::Point(15, 330);
			this->lblLocation->Name = L"lblLocation";
			this->lblLocation->Size = System::Drawing::Size(51, 13);
			this->lblLocation->TabIndex = 4;
			this->lblLocation->Text = L"Location:";
			// 
			// lblNote
			// 
			this->lblNote->AutoSize = true;
			this->lblNote->Location = System::Drawing::Point(15, 362);
			this->lblNote->Name = L"lblNote";
			this->lblNote->Size = System::Drawing::Size(33, 13);
			this->lblNote->TabIndex = 3;
			this->lblNote->Text = L"Note:";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(116, 403);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(103, 23);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Submit";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// lblCreateEvent
			// 
			this->lblCreateEvent->AutoSize = true;
			this->lblCreateEvent->Location = System::Drawing::Point(131, 26);
			this->lblCreateEvent->Name = L"lblCreateEvent";
			this->lblCreateEvent->Size = System::Drawing::Size(72, 13);
			this->lblCreateEvent->TabIndex = 2;
			this->lblCreateEvent->Text = L"Create Event:";
			// 
			// grpAdmin
			// 
			this->grpAdmin->Controls->Add(this->btnCreateEvent);
			this->grpAdmin->Controls->Add(this->btnViewSchedule);
			this->grpAdmin->Controls->Add(this->btnEditEvents);
			this->grpAdmin->Controls->Add(this->btnEditAvailability);
			this->grpAdmin->Controls->Add(this->lblAdmin);
			this->grpAdmin->Location = System::Drawing::Point(291, 74);
			this->grpAdmin->Name = L"grpAdmin";
			this->grpAdmin->Size = System::Drawing::Size(200, 277);
			this->grpAdmin->TabIndex = 7;
			this->grpAdmin->TabStop = false;
			this->grpAdmin->Visible = false;
			// 
			// btnCreateEvent
			// 
			this->btnCreateEvent->Location = System::Drawing::Point(50, 79);
			this->btnCreateEvent->Name = L"btnCreateEvent";
			this->btnCreateEvent->Size = System::Drawing::Size(103, 23);
			this->btnCreateEvent->TabIndex = 5;
			this->btnCreateEvent->Text = L"Create Event";
			this->btnCreateEvent->UseVisualStyleBackColor = true;
			this->btnCreateEvent->Click += gcnew System::EventHandler(this, &MyForm::btnCreateEvent_Click);
			// 
			// btnViewSchedule
			// 
			this->btnViewSchedule->Location = System::Drawing::Point(50, 137);
			this->btnViewSchedule->Name = L"btnViewSchedule";
			this->btnViewSchedule->Size = System::Drawing::Size(103, 23);
			this->btnViewSchedule->TabIndex = 4;
			this->btnViewSchedule->Text = L"View Schedule";
			this->btnViewSchedule->UseVisualStyleBackColor = true;
			this->btnViewSchedule->Click += gcnew System::EventHandler(this, &MyForm::btnViewSchedule_Click);
			// 
			// btnEditEvents
			// 
			this->btnEditEvents->Location = System::Drawing::Point(50, 108);
			this->btnEditEvents->Name = L"btnEditEvents";
			this->btnEditEvents->Size = System::Drawing::Size(103, 23);
			this->btnEditEvents->TabIndex = 3;
			this->btnEditEvents->Text = L"Edit Events";
			this->btnEditEvents->UseVisualStyleBackColor = true;
			// 
			// btnEditAvailability
			// 
			this->btnEditAvailability->Location = System::Drawing::Point(50, 166);
			this->btnEditAvailability->Name = L"btnEditAvailability";
			this->btnEditAvailability->Size = System::Drawing::Size(103, 23);
			this->btnEditAvailability->TabIndex = 0;
			this->btnEditAvailability->Text = L"Edit Availability";
			this->btnEditAvailability->UseVisualStyleBackColor = true;
			// 
			// lblAdmin
			// 
			this->lblAdmin->AutoSize = true;
			this->lblAdmin->Location = System::Drawing::Point(47, 34);
			this->lblAdmin->Name = L"lblAdmin";
			this->lblAdmin->Size = System::Drawing::Size(93, 13);
			this->lblAdmin->TabIndex = 2;
			this->lblAdmin->Text = L"Make a Selection:";
			// 
			// grpUser
			// 
			this->grpUser->Controls->Add(this->button2);
			this->grpUser->Controls->Add(this->button4);
			this->grpUser->Controls->Add(this->label1);
			this->grpUser->Location = System::Drawing::Point(291, 74);
			this->grpUser->Name = L"grpUser";
			this->grpUser->Size = System::Drawing::Size(200, 277);
			this->grpUser->TabIndex = 8;
			this->grpUser->TabStop = false;
			this->grpUser->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(50, 105);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"View Schedule";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(50, 134);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 23);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Edit Availability";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Make a Selection:";
			// 
			// grpLogin
			// 
			this->grpLogin->Controls->Add(this->lblUser);
			this->grpLogin->Controls->Add(this->btnLogin);
			this->grpLogin->Controls->Add(this->txtUser);
			this->grpLogin->Location = System::Drawing::Point(341, 74);
			this->grpLogin->Name = L"grpLogin";
			this->grpLogin->Size = System::Drawing::Size(200, 148);
			this->grpLogin->TabIndex = 7;
			this->grpLogin->TabStop = false;
			// 
			// lblUser
			// 
			this->lblUser->AutoSize = true;
			this->lblUser->Location = System::Drawing::Point(59, 39);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(91, 13);
			this->lblUser->TabIndex = 6;
			this->lblUser->Text = L"Enter Your Name:";
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(59, 102);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(75, 23);
			this->btnLogin->TabIndex = 0;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(49, 70);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(100, 20);
			this->txtUser->TabIndex = 1;
			// 
			// rbtn12Hr
			// 
			this->rbtn12Hr->AutoSize = true;
			this->rbtn12Hr->Location = System::Drawing::Point(30, 67);
			this->rbtn12Hr->Name = L"rbtn12Hr";
			this->rbtn12Hr->Size = System::Drawing::Size(63, 17);
			this->rbtn12Hr->TabIndex = 12;
			this->rbtn12Hr->TabStop = true;
			this->rbtn12Hr->Text = L"12 Hour";
			this->rbtn12Hr->UseVisualStyleBackColor = true;
			this->rbtn12Hr->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn12Hr_CheckedChanged);
			// 
			// rbtn24Hr
			// 
			this->rbtn24Hr->AutoSize = true;
			this->rbtn24Hr->Location = System::Drawing::Point(30, 90);
			this->rbtn24Hr->Name = L"rbtn24Hr";
			this->rbtn24Hr->Size = System::Drawing::Size(63, 17);
			this->rbtn24Hr->TabIndex = 13;
			this->rbtn24Hr->TabStop = true;
			this->rbtn24Hr->Text = L"24 Hour";
			this->rbtn24Hr->UseVisualStyleBackColor = true;
			this->rbtn24Hr->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn24Hr_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Location = System::Drawing::Point(341, 74);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 148);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Visible = false;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(59, 45);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Admin Mode";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(59, 89);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 0;
			this->button5->Text = L"User Mode";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// grpAvailability
			// 
			this->grpAvailability->Controls->Add(this->pnl24Hr);
			this->grpAvailability->Controls->Add(this->textBox4);
			this->grpAvailability->Controls->Add(this->button8);
			this->grpAvailability->Controls->Add(this->label7);
			this->grpAvailability->Controls->Add(this->rbtn24Hr);
			this->grpAvailability->Controls->Add(this->pnl12Hr);
			this->grpAvailability->Controls->Add(this->rbtn12Hr);
			this->grpAvailability->Location = System::Drawing::Point(18, 29);
			this->grpAvailability->Name = L"grpAvailability";
			this->grpAvailability->Size = System::Drawing::Size(472, 441);
			this->grpAvailability->TabIndex = 13;
			this->grpAvailability->TabStop = false;
			this->grpAvailability->Visible = false;
			// 
			// pnl24Hr
			// 
			this->pnl24Hr->Controls->Add(this->rbtn23_00);
			this->pnl24Hr->Controls->Add(this->rbtn22_23);
			this->pnl24Hr->Controls->Add(this->rbtn21_22);
			this->pnl24Hr->Controls->Add(this->rbtn20_21);
			this->pnl24Hr->Controls->Add(this->rbtn19_20);
			this->pnl24Hr->Controls->Add(this->rbtn18_19);
			this->pnl24Hr->Controls->Add(this->rbtn17_18);
			this->pnl24Hr->Controls->Add(this->rbtn16_17);
			this->pnl24Hr->Controls->Add(this->rbtn15_16);
			this->pnl24Hr->Controls->Add(this->rbtn14_15);
			this->pnl24Hr->Controls->Add(this->rbtn13_14);
			this->pnl24Hr->Controls->Add(this->rbtn11_12);
			this->pnl24Hr->Controls->Add(this->rbtn10_11);
			this->pnl24Hr->Controls->Add(this->rbtn09_10);
			this->pnl24Hr->Controls->Add(this->rbtn08_09);
			this->pnl24Hr->Controls->Add(this->rbtn07_08);
			this->pnl24Hr->Controls->Add(this->rbtn06_07);
			this->pnl24Hr->Controls->Add(this->rbtn05_06);
			this->pnl24Hr->Location = System::Drawing::Point(121, 53);
			this->pnl24Hr->Name = L"pnl24Hr";
			this->pnl24Hr->Size = System::Drawing::Size(136, 310);
			this->pnl24Hr->TabIndex = 44;
			this->pnl24Hr->Visible = false;
			// 
			// rbtn23_00
			// 
			this->rbtn23_00->AutoSize = true;
			this->rbtn23_00->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn23_00->Location = System::Drawing::Point(0, 289);
			this->rbtn23_00->Name = L"rbtn23_00";
			this->rbtn23_00->Size = System::Drawing::Size(136, 17);
			this->rbtn23_00->TabIndex = 43;
			this->rbtn23_00->TabStop = true;
			this->rbtn23_00->Text = L"23:00 - 00:00";
			this->rbtn23_00->UseVisualStyleBackColor = true;
			this->rbtn23_00->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn23_00_CheckedChanged);
			// 
			// rbtn22_23
			// 
			this->rbtn22_23->AutoSize = true;
			this->rbtn22_23->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn22_23->Location = System::Drawing::Point(0, 272);
			this->rbtn22_23->Name = L"rbtn22_23";
			this->rbtn22_23->Size = System::Drawing::Size(136, 17);
			this->rbtn22_23->TabIndex = 42;
			this->rbtn22_23->TabStop = true;
			this->rbtn22_23->Text = L"22:00 - 23:00";
			this->rbtn22_23->UseVisualStyleBackColor = true;
			this->rbtn22_23->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn22_23_CheckedChanged);
			// 
			// rbtn21_22
			// 
			this->rbtn21_22->AutoSize = true;
			this->rbtn21_22->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn21_22->Location = System::Drawing::Point(0, 255);
			this->rbtn21_22->Name = L"rbtn21_22";
			this->rbtn21_22->Size = System::Drawing::Size(136, 17);
			this->rbtn21_22->TabIndex = 41;
			this->rbtn21_22->TabStop = true;
			this->rbtn21_22->Text = L"21:00 - 22:00";
			this->rbtn21_22->UseVisualStyleBackColor = true;
			this->rbtn21_22->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn21_22_CheckedChanged);
			// 
			// rbtn20_21
			// 
			this->rbtn20_21->AutoSize = true;
			this->rbtn20_21->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn20_21->Location = System::Drawing::Point(0, 238);
			this->rbtn20_21->Name = L"rbtn20_21";
			this->rbtn20_21->Size = System::Drawing::Size(136, 17);
			this->rbtn20_21->TabIndex = 40;
			this->rbtn20_21->TabStop = true;
			this->rbtn20_21->Text = L"20:00 - 21:00";
			this->rbtn20_21->UseVisualStyleBackColor = true;
			this->rbtn20_21->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn20_21_CheckedChanged);
			// 
			// rbtn19_20
			// 
			this->rbtn19_20->AutoSize = true;
			this->rbtn19_20->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn19_20->Location = System::Drawing::Point(0, 221);
			this->rbtn19_20->Name = L"rbtn19_20";
			this->rbtn19_20->Size = System::Drawing::Size(136, 17);
			this->rbtn19_20->TabIndex = 39;
			this->rbtn19_20->TabStop = true;
			this->rbtn19_20->Text = L"19:00 - 20:00";
			this->rbtn19_20->UseVisualStyleBackColor = true;
			this->rbtn19_20->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn19_20_CheckedChanged);
			// 
			// rbtn18_19
			// 
			this->rbtn18_19->AutoSize = true;
			this->rbtn18_19->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn18_19->Location = System::Drawing::Point(0, 204);
			this->rbtn18_19->Name = L"rbtn18_19";
			this->rbtn18_19->Size = System::Drawing::Size(136, 17);
			this->rbtn18_19->TabIndex = 38;
			this->rbtn18_19->TabStop = true;
			this->rbtn18_19->Text = L"18:00 - 19:00";
			this->rbtn18_19->UseVisualStyleBackColor = true;
			this->rbtn18_19->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn18_19_CheckedChanged);
			// 
			// rbtn17_18
			// 
			this->rbtn17_18->AutoSize = true;
			this->rbtn17_18->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn17_18->Location = System::Drawing::Point(0, 187);
			this->rbtn17_18->Name = L"rbtn17_18";
			this->rbtn17_18->Size = System::Drawing::Size(136, 17);
			this->rbtn17_18->TabIndex = 37;
			this->rbtn17_18->TabStop = true;
			this->rbtn17_18->Text = L"17:00 - 18:00";
			this->rbtn17_18->UseVisualStyleBackColor = true;
			this->rbtn17_18->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn17_18_CheckedChanged);
			// 
			// rbtn16_17
			// 
			this->rbtn16_17->AutoSize = true;
			this->rbtn16_17->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn16_17->Location = System::Drawing::Point(0, 170);
			this->rbtn16_17->Name = L"rbtn16_17";
			this->rbtn16_17->Size = System::Drawing::Size(136, 17);
			this->rbtn16_17->TabIndex = 36;
			this->rbtn16_17->TabStop = true;
			this->rbtn16_17->Text = L"16:00 - 17:00";
			this->rbtn16_17->UseVisualStyleBackColor = true;
			this->rbtn16_17->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn16_17_CheckedChanged);
			// 
			// rbtn15_16
			// 
			this->rbtn15_16->AutoSize = true;
			this->rbtn15_16->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn15_16->Location = System::Drawing::Point(0, 153);
			this->rbtn15_16->Name = L"rbtn15_16";
			this->rbtn15_16->Size = System::Drawing::Size(136, 17);
			this->rbtn15_16->TabIndex = 35;
			this->rbtn15_16->TabStop = true;
			this->rbtn15_16->Text = L"15:00 - 16:00";
			this->rbtn15_16->UseVisualStyleBackColor = true;
			this->rbtn15_16->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn15_16_CheckedChanged);
			// 
			// rbtn14_15
			// 
			this->rbtn14_15->AutoSize = true;
			this->rbtn14_15->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn14_15->Location = System::Drawing::Point(0, 136);
			this->rbtn14_15->Name = L"rbtn14_15";
			this->rbtn14_15->Size = System::Drawing::Size(136, 17);
			this->rbtn14_15->TabIndex = 34;
			this->rbtn14_15->TabStop = true;
			this->rbtn14_15->Text = L"14:00 - 15:00";
			this->rbtn14_15->UseVisualStyleBackColor = true;
			this->rbtn14_15->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn14_15_CheckedChanged);
			// 
			// rbtn13_14
			// 
			this->rbtn13_14->AutoSize = true;
			this->rbtn13_14->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn13_14->Location = System::Drawing::Point(0, 119);
			this->rbtn13_14->Name = L"rbtn13_14";
			this->rbtn13_14->Size = System::Drawing::Size(136, 17);
			this->rbtn13_14->TabIndex = 33;
			this->rbtn13_14->TabStop = true;
			this->rbtn13_14->Text = L"13:00 - 14:00";
			this->rbtn13_14->UseVisualStyleBackColor = true;
			this->rbtn13_14->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn13_14_CheckedChanged);
			// 
			// rbtn11_12
			// 
			this->rbtn11_12->AutoSize = true;
			this->rbtn11_12->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn11_12->Location = System::Drawing::Point(0, 102);
			this->rbtn11_12->Name = L"rbtn11_12";
			this->rbtn11_12->Size = System::Drawing::Size(136, 17);
			this->rbtn11_12->TabIndex = 32;
			this->rbtn11_12->TabStop = true;
			this->rbtn11_12->Text = L"11:00 - 12:00";
			this->rbtn11_12->UseVisualStyleBackColor = true;
			this->rbtn11_12->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn11_12_CheckedChanged);
			// 
			// rbtn10_11
			// 
			this->rbtn10_11->AutoSize = true;
			this->rbtn10_11->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn10_11->Location = System::Drawing::Point(0, 85);
			this->rbtn10_11->Name = L"rbtn10_11";
			this->rbtn10_11->Size = System::Drawing::Size(136, 17);
			this->rbtn10_11->TabIndex = 31;
			this->rbtn10_11->TabStop = true;
			this->rbtn10_11->Text = L"10:00 - 11:00";
			this->rbtn10_11->UseVisualStyleBackColor = true;
			this->rbtn10_11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn10_11_CheckedChanged);
			// 
			// rbtn09_10
			// 
			this->rbtn09_10->AutoSize = true;
			this->rbtn09_10->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn09_10->Location = System::Drawing::Point(0, 68);
			this->rbtn09_10->Name = L"rbtn09_10";
			this->rbtn09_10->Size = System::Drawing::Size(136, 17);
			this->rbtn09_10->TabIndex = 30;
			this->rbtn09_10->TabStop = true;
			this->rbtn09_10->Text = L"09:00 - 10:00";
			this->rbtn09_10->UseVisualStyleBackColor = true;
			this->rbtn09_10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn09_10_CheckedChanged);
			// 
			// rbtn08_09
			// 
			this->rbtn08_09->AutoSize = true;
			this->rbtn08_09->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn08_09->Location = System::Drawing::Point(0, 51);
			this->rbtn08_09->Name = L"rbtn08_09";
			this->rbtn08_09->Size = System::Drawing::Size(136, 17);
			this->rbtn08_09->TabIndex = 29;
			this->rbtn08_09->TabStop = true;
			this->rbtn08_09->Text = L"08:00 - 09:00";
			this->rbtn08_09->UseVisualStyleBackColor = true;
			this->rbtn08_09->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn08_09_CheckedChanged);
			// 
			// rbtn07_08
			// 
			this->rbtn07_08->AutoSize = true;
			this->rbtn07_08->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn07_08->Location = System::Drawing::Point(0, 34);
			this->rbtn07_08->Name = L"rbtn07_08";
			this->rbtn07_08->Size = System::Drawing::Size(136, 17);
			this->rbtn07_08->TabIndex = 28;
			this->rbtn07_08->TabStop = true;
			this->rbtn07_08->Text = L"07:00 - 08:00";
			this->rbtn07_08->UseVisualStyleBackColor = true;
			this->rbtn07_08->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn07_08_CheckedChanged);
			// 
			// rbtn06_07
			// 
			this->rbtn06_07->AutoSize = true;
			this->rbtn06_07->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn06_07->Location = System::Drawing::Point(0, 17);
			this->rbtn06_07->Name = L"rbtn06_07";
			this->rbtn06_07->Size = System::Drawing::Size(136, 17);
			this->rbtn06_07->TabIndex = 27;
			this->rbtn06_07->TabStop = true;
			this->rbtn06_07->Text = L"06:00 - 07:00";
			this->rbtn06_07->UseVisualStyleBackColor = true;
			this->rbtn06_07->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn06_07_CheckedChanged);
			// 
			// rbtn05_06
			// 
			this->rbtn05_06->AutoSize = true;
			this->rbtn05_06->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn05_06->Location = System::Drawing::Point(0, 0);
			this->rbtn05_06->Name = L"rbtn05_06";
			this->rbtn05_06->Size = System::Drawing::Size(136, 17);
			this->rbtn05_06->TabIndex = 26;
			this->rbtn05_06->TabStop = true;
			this->rbtn05_06->Text = L"05:00 - 06:00";
			this->rbtn05_06->UseVisualStyleBackColor = true;
			this->rbtn05_06->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn05_06_CheckedChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(6, 208);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 16;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(181, 402);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(103, 23);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Submit";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(183, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Create Event:";
			// 
			// pnl12Hr
			// 
			this->pnl12Hr->Controls->Add(this->rbtn11_12AM);
			this->pnl12Hr->Controls->Add(this->rbtn10_11PM);
			this->pnl12Hr->Controls->Add(this->rbtn9_10PM);
			this->pnl12Hr->Controls->Add(this->rbtn8_9PM);
			this->pnl12Hr->Controls->Add(this->rbtn7_8PM);
			this->pnl12Hr->Controls->Add(this->rbtn6_7PM);
			this->pnl12Hr->Controls->Add(this->rbtn5_6PM);
			this->pnl12Hr->Controls->Add(this->rbtn4_5PM);
			this->pnl12Hr->Controls->Add(this->rbtn3_4PM);
			this->pnl12Hr->Controls->Add(this->rbtn2_3PM);
			this->pnl12Hr->Controls->Add(this->rbtn1_2PM);
			this->pnl12Hr->Controls->Add(this->rbtn11_12PM);
			this->pnl12Hr->Controls->Add(this->rbtn10_11AM);
			this->pnl12Hr->Controls->Add(this->rbtn9_10AM);
			this->pnl12Hr->Controls->Add(this->rbtn8_9AM);
			this->pnl12Hr->Controls->Add(this->rbtn7_8AM);
			this->pnl12Hr->Controls->Add(this->rbtn6_7AM);
			this->pnl12Hr->Controls->Add(this->rbtn5_6AM);
			this->pnl12Hr->Location = System::Drawing::Point(121, 53);
			this->pnl12Hr->Name = L"pnl12Hr";
			this->pnl12Hr->Size = System::Drawing::Size(136, 310);
			this->pnl12Hr->TabIndex = 27;
			this->pnl12Hr->Visible = false;
			// 
			// rbtn11_12AM
			// 
			this->rbtn11_12AM->AutoSize = true;
			this->rbtn11_12AM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn11_12AM->Location = System::Drawing::Point(0, 289);
			this->rbtn11_12AM->Name = L"rbtn11_12AM";
			this->rbtn11_12AM->Size = System::Drawing::Size(136, 17);
			this->rbtn11_12AM->TabIndex = 43;
			this->rbtn11_12AM->TabStop = true;
			this->rbtn11_12AM->Text = L"11:00 PM - 12:00 AM";
			this->rbtn11_12AM->UseVisualStyleBackColor = true;
			this->rbtn11_12AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn11_12AM_CheckedChanged);
			// 
			// rbtn10_11PM
			// 
			this->rbtn10_11PM->AutoSize = true;
			this->rbtn10_11PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn10_11PM->Location = System::Drawing::Point(0, 272);
			this->rbtn10_11PM->Name = L"rbtn10_11PM";
			this->rbtn10_11PM->Size = System::Drawing::Size(136, 17);
			this->rbtn10_11PM->TabIndex = 42;
			this->rbtn10_11PM->TabStop = true;
			this->rbtn10_11PM->Text = L"10:00 PM - 11:00 PM";
			this->rbtn10_11PM->UseVisualStyleBackColor = true;
			this->rbtn10_11PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn10_11PM_CheckedChanged);
			// 
			// rbtn9_10PM
			// 
			this->rbtn9_10PM->AutoSize = true;
			this->rbtn9_10PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn9_10PM->Location = System::Drawing::Point(0, 255);
			this->rbtn9_10PM->Name = L"rbtn9_10PM";
			this->rbtn9_10PM->Size = System::Drawing::Size(136, 17);
			this->rbtn9_10PM->TabIndex = 41;
			this->rbtn9_10PM->TabStop = true;
			this->rbtn9_10PM->Text = L"9:00 PM - 10:00 PM";
			this->rbtn9_10PM->UseVisualStyleBackColor = true;
			this->rbtn9_10PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn9_10PM_CheckedChanged);
			// 
			// rbtn8_9PM
			// 
			this->rbtn8_9PM->AutoSize = true;
			this->rbtn8_9PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn8_9PM->Location = System::Drawing::Point(0, 238);
			this->rbtn8_9PM->Name = L"rbtn8_9PM";
			this->rbtn8_9PM->Size = System::Drawing::Size(136, 17);
			this->rbtn8_9PM->TabIndex = 40;
			this->rbtn8_9PM->TabStop = true;
			this->rbtn8_9PM->Text = L"8:00 PM - 9:00 PM";
			this->rbtn8_9PM->UseVisualStyleBackColor = true;
			this->rbtn8_9PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn8_9PM_CheckedChanged);
			// 
			// rbtn7_8PM
			// 
			this->rbtn7_8PM->AutoSize = true;
			this->rbtn7_8PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn7_8PM->Location = System::Drawing::Point(0, 221);
			this->rbtn7_8PM->Name = L"rbtn7_8PM";
			this->rbtn7_8PM->Size = System::Drawing::Size(136, 17);
			this->rbtn7_8PM->TabIndex = 39;
			this->rbtn7_8PM->TabStop = true;
			this->rbtn7_8PM->Text = L"7:00 PM - 8:00 PM";
			this->rbtn7_8PM->UseVisualStyleBackColor = true;
			this->rbtn7_8PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn7_8PM_CheckedChanged);
			// 
			// rbtn6_7PM
			// 
			this->rbtn6_7PM->AutoSize = true;
			this->rbtn6_7PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn6_7PM->Location = System::Drawing::Point(0, 204);
			this->rbtn6_7PM->Name = L"rbtn6_7PM";
			this->rbtn6_7PM->Size = System::Drawing::Size(136, 17);
			this->rbtn6_7PM->TabIndex = 38;
			this->rbtn6_7PM->TabStop = true;
			this->rbtn6_7PM->Text = L"6:00 PM - 7:00 PM";
			this->rbtn6_7PM->UseVisualStyleBackColor = true;
			this->rbtn6_7PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn6_7PM_CheckedChanged);
			// 
			// rbtn5_6PM
			// 
			this->rbtn5_6PM->AutoSize = true;
			this->rbtn5_6PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn5_6PM->Location = System::Drawing::Point(0, 187);
			this->rbtn5_6PM->Name = L"rbtn5_6PM";
			this->rbtn5_6PM->Size = System::Drawing::Size(136, 17);
			this->rbtn5_6PM->TabIndex = 37;
			this->rbtn5_6PM->TabStop = true;
			this->rbtn5_6PM->Text = L"5:00 PM - 6:00 PM";
			this->rbtn5_6PM->UseVisualStyleBackColor = true;
			this->rbtn5_6PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn5_6PM_CheckedChanged);
			// 
			// rbtn4_5PM
			// 
			this->rbtn4_5PM->AutoSize = true;
			this->rbtn4_5PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn4_5PM->Location = System::Drawing::Point(0, 170);
			this->rbtn4_5PM->Name = L"rbtn4_5PM";
			this->rbtn4_5PM->Size = System::Drawing::Size(136, 17);
			this->rbtn4_5PM->TabIndex = 36;
			this->rbtn4_5PM->TabStop = true;
			this->rbtn4_5PM->Text = L"4:00 PM - 5:00 PM";
			this->rbtn4_5PM->UseVisualStyleBackColor = true;
			this->rbtn4_5PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn4_5PM_CheckedChanged);
			// 
			// rbtn3_4PM
			// 
			this->rbtn3_4PM->AutoSize = true;
			this->rbtn3_4PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn3_4PM->Location = System::Drawing::Point(0, 153);
			this->rbtn3_4PM->Name = L"rbtn3_4PM";
			this->rbtn3_4PM->Size = System::Drawing::Size(136, 17);
			this->rbtn3_4PM->TabIndex = 35;
			this->rbtn3_4PM->TabStop = true;
			this->rbtn3_4PM->Text = L"3:00 PM - 4:00 PM";
			this->rbtn3_4PM->UseVisualStyleBackColor = true;
			this->rbtn3_4PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn3_4PM_CheckedChanged);
			// 
			// rbtn2_3PM
			// 
			this->rbtn2_3PM->AutoSize = true;
			this->rbtn2_3PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn2_3PM->Location = System::Drawing::Point(0, 136);
			this->rbtn2_3PM->Name = L"rbtn2_3PM";
			this->rbtn2_3PM->Size = System::Drawing::Size(136, 17);
			this->rbtn2_3PM->TabIndex = 34;
			this->rbtn2_3PM->TabStop = true;
			this->rbtn2_3PM->Text = L"2:00 PM - 3:00 PM";
			this->rbtn2_3PM->UseVisualStyleBackColor = true;
			this->rbtn2_3PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn2_3PM_CheckedChanged);
			// 
			// rbtn1_2PM
			// 
			this->rbtn1_2PM->AutoSize = true;
			this->rbtn1_2PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn1_2PM->Location = System::Drawing::Point(0, 119);
			this->rbtn1_2PM->Name = L"rbtn1_2PM";
			this->rbtn1_2PM->Size = System::Drawing::Size(136, 17);
			this->rbtn1_2PM->TabIndex = 33;
			this->rbtn1_2PM->TabStop = true;
			this->rbtn1_2PM->Text = L"1:00 PM - 2:00 PM";
			this->rbtn1_2PM->UseVisualStyleBackColor = true;
			this->rbtn1_2PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn1_2PM_CheckedChanged);
			// 
			// rbtn11_12PM
			// 
			this->rbtn11_12PM->AutoSize = true;
			this->rbtn11_12PM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn11_12PM->Location = System::Drawing::Point(0, 102);
			this->rbtn11_12PM->Name = L"rbtn11_12PM";
			this->rbtn11_12PM->Size = System::Drawing::Size(136, 17);
			this->rbtn11_12PM->TabIndex = 32;
			this->rbtn11_12PM->TabStop = true;
			this->rbtn11_12PM->Text = L"11:00 AM - 12:00 PM";
			this->rbtn11_12PM->UseVisualStyleBackColor = true;
			this->rbtn11_12PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn11_12PM_CheckedChanged);
			// 
			// rbtn10_11AM
			// 
			this->rbtn10_11AM->AutoSize = true;
			this->rbtn10_11AM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn10_11AM->Location = System::Drawing::Point(0, 85);
			this->rbtn10_11AM->Name = L"rbtn10_11AM";
			this->rbtn10_11AM->Size = System::Drawing::Size(136, 17);
			this->rbtn10_11AM->TabIndex = 31;
			this->rbtn10_11AM->TabStop = true;
			this->rbtn10_11AM->Text = L"10:00 AM - 11:00 AM";
			this->rbtn10_11AM->UseVisualStyleBackColor = true;
			this->rbtn10_11AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn10_11AM_CheckedChanged);
			// 
			// rbtn9_10AM
			// 
			this->rbtn9_10AM->AutoSize = true;
			this->rbtn9_10AM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn9_10AM->Location = System::Drawing::Point(0, 68);
			this->rbtn9_10AM->Name = L"rbtn9_10AM";
			this->rbtn9_10AM->Size = System::Drawing::Size(136, 17);
			this->rbtn9_10AM->TabIndex = 30;
			this->rbtn9_10AM->TabStop = true;
			this->rbtn9_10AM->Text = L"9:00 AM - 10:00 AM";
			this->rbtn9_10AM->UseVisualStyleBackColor = true;
			this->rbtn9_10AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn9_10AM_CheckedChanged);
			// 
			// rbtn8_9AM
			// 
			this->rbtn8_9AM->AutoSize = true;
			this->rbtn8_9AM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn8_9AM->Location = System::Drawing::Point(0, 51);
			this->rbtn8_9AM->Name = L"rbtn8_9AM";
			this->rbtn8_9AM->Size = System::Drawing::Size(136, 17);
			this->rbtn8_9AM->TabIndex = 29;
			this->rbtn8_9AM->TabStop = true;
			this->rbtn8_9AM->Text = L"8:00 AM - 9:00 AM";
			this->rbtn8_9AM->UseVisualStyleBackColor = true;
			this->rbtn8_9AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn8_9AM_CheckedChanged);
			// 
			// rbtn7_8AM
			// 
			this->rbtn7_8AM->AutoSize = true;
			this->rbtn7_8AM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn7_8AM->Location = System::Drawing::Point(0, 34);
			this->rbtn7_8AM->Name = L"rbtn7_8AM";
			this->rbtn7_8AM->Size = System::Drawing::Size(136, 17);
			this->rbtn7_8AM->TabIndex = 28;
			this->rbtn7_8AM->TabStop = true;
			this->rbtn7_8AM->Text = L"7:00 AM - 8:00 AM";
			this->rbtn7_8AM->UseVisualStyleBackColor = true;
			this->rbtn7_8AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn7_8AM_CheckedChanged);
			// 
			// rbtn6_7AM
			// 
			this->rbtn6_7AM->AutoSize = true;
			this->rbtn6_7AM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn6_7AM->Location = System::Drawing::Point(0, 17);
			this->rbtn6_7AM->Name = L"rbtn6_7AM";
			this->rbtn6_7AM->Size = System::Drawing::Size(136, 17);
			this->rbtn6_7AM->TabIndex = 27;
			this->rbtn6_7AM->TabStop = true;
			this->rbtn6_7AM->Text = L"6:00 AM - 7:00 AM";
			this->rbtn6_7AM->UseVisualStyleBackColor = true;
			this->rbtn6_7AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn6_7AM_CheckedChanged);
			// 
			// rbtn5_6AM
			// 
			this->rbtn5_6AM->AutoSize = true;
			this->rbtn5_6AM->Dock = System::Windows::Forms::DockStyle::Top;
			this->rbtn5_6AM->Location = System::Drawing::Point(0, 0);
			this->rbtn5_6AM->Name = L"rbtn5_6AM";
			this->rbtn5_6AM->Size = System::Drawing::Size(136, 17);
			this->rbtn5_6AM->TabIndex = 26;
			this->rbtn5_6AM->TabStop = true;
			this->rbtn5_6AM->Text = L"5:00 AM - 6:00 AM";
			this->rbtn5_6AM->UseVisualStyleBackColor = true;
			this->rbtn5_6AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn5_6AM_CheckedChanged);
			// 
			// pnl5_6AM
			// 
			this->pnl5_6AM->Controls->Add(this->chk540_600AM);
			this->pnl5_6AM->Controls->Add(this->chk520_540AM);
			this->pnl5_6AM->Controls->Add(this->chk500_520AM);
			this->pnl5_6AM->Location = System::Drawing::Point(1021, 32);
			this->pnl5_6AM->Name = L"pnl5_6AM";
			this->pnl5_6AM->Size = System::Drawing::Size(264, 76);
			this->pnl5_6AM->TabIndex = 25;
			this->pnl5_6AM->Visible = false;
			// 
			// chk540_600AM
			// 
			this->chk540_600AM->Location = System::Drawing::Point(15, 57);
			this->chk540_600AM->Name = L"chk540_600AM";
			this->chk540_600AM->Size = System::Drawing::Size(118, 22);
			this->chk540_600AM->TabIndex = 22;
			this->chk540_600AM->Text = L"5:40 AM - 6:00 AM";
			this->chk540_600AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk540_600AM_CheckedChanged);
			// 
			// chk520_540AM
			// 
			this->chk520_540AM->Location = System::Drawing::Point(15, 34);
			this->chk520_540AM->Name = L"chk520_540AM";
			this->chk520_540AM->Size = System::Drawing::Size(118, 22);
			this->chk520_540AM->TabIndex = 19;
			this->chk520_540AM->Text = L"5:20 AM - 5:40 AM";
			this->chk520_540AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk520_540AM_CheckedChanged);
			// 
			// chk500_520AM
			// 
			this->chk500_520AM->Location = System::Drawing::Point(15, 12);
			this->chk500_520AM->Name = L"chk500_520AM";
			this->chk500_520AM->Size = System::Drawing::Size(118, 22);
			this->chk500_520AM->TabIndex = 18;
			this->chk500_520AM->Text = L"5:00 AM - 5:20 AM";
			this->chk500_520AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk500_520AM_CheckedChanged);
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(751, 20);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(264, 852);
			this->panel5->TabIndex = 28;
			// 
			// pnl7_8AM
			// 
			this->pnl7_8AM->Controls->Add(this->chk740_800AM);
			this->pnl7_8AM->Controls->Add(this->chk720_740AM);
			this->pnl7_8AM->Controls->Add(this->chk700_720AM);
			this->pnl7_8AM->Location = System::Drawing::Point(1021, 197);
			this->pnl7_8AM->Name = L"pnl7_8AM";
			this->pnl7_8AM->Size = System::Drawing::Size(264, 76);
			this->pnl7_8AM->TabIndex = 30;
			this->pnl7_8AM->Visible = false;
			// 
			// chk740_800AM
			// 
			this->chk740_800AM->Location = System::Drawing::Point(15, 57);
			this->chk740_800AM->Name = L"chk740_800AM";
			this->chk740_800AM->Size = System::Drawing::Size(118, 22);
			this->chk740_800AM->TabIndex = 22;
			this->chk740_800AM->Text = L"7:40 AM - 8:00 AM";
			this->chk740_800AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk740_800AM_CheckedChanged);
			// 
			// chk720_740AM
			// 
			this->chk720_740AM->Location = System::Drawing::Point(15, 34);
			this->chk720_740AM->Name = L"chk720_740AM";
			this->chk720_740AM->Size = System::Drawing::Size(118, 22);
			this->chk720_740AM->TabIndex = 19;
			this->chk720_740AM->Text = L"7:20 AM - 7:40 AM";
			this->chk720_740AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk720_740AM_CheckedChanged);
			// 
			// chk700_720AM
			// 
			this->chk700_720AM->Location = System::Drawing::Point(15, 12);
			this->chk700_720AM->Name = L"chk700_720AM";
			this->chk700_720AM->Size = System::Drawing::Size(118, 22);
			this->chk700_720AM->TabIndex = 18;
			this->chk700_720AM->Text = L"7:00 AM - 7:20 AM";
			this->chk700_720AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk700_720AM_CheckedChanged);
			// 
			// pnl1_2PM
			// 
			this->pnl1_2PM->Controls->Add(this->chk140_200PM);
			this->pnl1_2PM->Controls->Add(this->chk120_140PM);
			this->pnl1_2PM->Controls->Add(this->chk100_120PM);
			this->pnl1_2PM->Location = System::Drawing::Point(1021, 621);
			this->pnl1_2PM->Name = L"pnl1_2PM";
			this->pnl1_2PM->Size = System::Drawing::Size(264, 76);
			this->pnl1_2PM->TabIndex = 34;
			this->pnl1_2PM->Visible = false;
			// 
			// chk140_200PM
			// 
			this->chk140_200PM->Location = System::Drawing::Point(15, 57);
			this->chk140_200PM->Name = L"chk140_200PM";
			this->chk140_200PM->Size = System::Drawing::Size(118, 22);
			this->chk140_200PM->TabIndex = 22;
			this->chk140_200PM->Text = L"1:40 PM - 2:00 PM";
			// 
			// chk120_140PM
			// 
			this->chk120_140PM->Location = System::Drawing::Point(15, 34);
			this->chk120_140PM->Name = L"chk120_140PM";
			this->chk120_140PM->Size = System::Drawing::Size(118, 22);
			this->chk120_140PM->TabIndex = 19;
			this->chk120_140PM->Text = L"1:20 PM - 1:40 PM";
			// 
			// chk100_120PM
			// 
			this->chk100_120PM->Location = System::Drawing::Point(15, 12);
			this->chk100_120PM->Name = L"chk100_120PM";
			this->chk100_120PM->Size = System::Drawing::Size(118, 22);
			this->chk100_120PM->TabIndex = 18;
			this->chk100_120PM->Text = L"1:00 PM - 1:20 PM";
			this->chk100_120PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk100_120PM_CheckedChanged);
			// 
			// pnl11_12PM
			// 
			this->pnl11_12PM->Controls->Add(this->chk1140_1200PM);
			this->pnl11_12PM->Controls->Add(this->chk1120_1140AM);
			this->pnl11_12PM->Controls->Add(this->chk1100_1120AM);
			this->pnl11_12PM->Location = System::Drawing::Point(1021, 536);
			this->pnl11_12PM->Name = L"pnl11_12PM";
			this->pnl11_12PM->Size = System::Drawing::Size(264, 76);
			this->pnl11_12PM->TabIndex = 34;
			this->pnl11_12PM->Visible = false;
			// 
			// chk1140_1200PM
			// 
			this->chk1140_1200PM->Location = System::Drawing::Point(15, 57);
			this->chk1140_1200PM->Name = L"chk1140_1200PM";
			this->chk1140_1200PM->Size = System::Drawing::Size(131, 22);
			this->chk1140_1200PM->TabIndex = 22;
			this->chk1140_1200PM->Text = L"11:40 AM - 12:00 PM";
			this->chk1140_1200PM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk1140_1200PM_CheckedChanged);
			// 
			// chk1120_1140AM
			// 
			this->chk1120_1140AM->Location = System::Drawing::Point(15, 34);
			this->chk1120_1140AM->Name = L"chk1120_1140AM";
			this->chk1120_1140AM->Size = System::Drawing::Size(131, 22);
			this->chk1120_1140AM->TabIndex = 19;
			this->chk1120_1140AM->Text = L"11:20 AM - 11:40 AM";
			this->chk1120_1140AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk1120_1140AM_CheckedChanged);
			// 
			// chk1100_1120AM
			// 
			this->chk1100_1120AM->Location = System::Drawing::Point(15, 12);
			this->chk1100_1120AM->Name = L"chk1100_1120AM";
			this->chk1100_1120AM->Size = System::Drawing::Size(131, 22);
			this->chk1100_1120AM->TabIndex = 18;
			this->chk1100_1120AM->Text = L"11:00 AM - 11:20 AM";
			this->chk1100_1120AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk1100_1120AM_CheckedChanged);
			// 
			// pnl7_8PM
			// 
			this->pnl7_8PM->Controls->Add(this->chk740_800PM);
			this->pnl7_8PM->Controls->Add(this->chk720_740PM);
			this->pnl7_8PM->Controls->Add(this->chk700_720PM);
			this->pnl7_8PM->Location = System::Drawing::Point(1314, 432);
			this->pnl7_8PM->Name = L"pnl7_8PM";
			this->pnl7_8PM->Size = System::Drawing::Size(264, 76);
			this->pnl7_8PM->TabIndex = 39;
			this->pnl7_8PM->Visible = false;
			// 
			// chk740_800PM
			// 
			this->chk740_800PM->Location = System::Drawing::Point(15, 57);
			this->chk740_800PM->Name = L"chk740_800PM";
			this->chk740_800PM->Size = System::Drawing::Size(118, 22);
			this->chk740_800PM->TabIndex = 22;
			this->chk740_800PM->Text = L"7:40 PM - 8:00 PM";
			// 
			// chk720_740PM
			// 
			this->chk720_740PM->Location = System::Drawing::Point(15, 34);
			this->chk720_740PM->Name = L"chk720_740PM";
			this->chk720_740PM->Size = System::Drawing::Size(118, 22);
			this->chk720_740PM->TabIndex = 19;
			this->chk720_740PM->Text = L"7:20 PM - 7:40 PM";
			// 
			// chk700_720PM
			// 
			this->chk700_720PM->Location = System::Drawing::Point(15, 12);
			this->chk700_720PM->Name = L"chk700_720PM";
			this->chk700_720PM->Size = System::Drawing::Size(118, 22);
			this->chk700_720PM->TabIndex = 18;
			this->chk700_720PM->Text = L"7:00 PM - 7:20 PM";
			// 
			// pnl6_7PM
			// 
			this->pnl6_7PM->Controls->Add(this->chk640_700PM);
			this->pnl6_7PM->Controls->Add(this->chk620_640PM);
			this->pnl6_7PM->Controls->Add(this->chk600_620PM);
			this->pnl6_7PM->Location = System::Drawing::Point(1314, 349);
			this->pnl6_7PM->Name = L"pnl6_7PM";
			this->pnl6_7PM->Size = System::Drawing::Size(264, 76);
			this->pnl6_7PM->TabIndex = 38;
			this->pnl6_7PM->Visible = false;
			// 
			// chk640_700PM
			// 
			this->chk640_700PM->Location = System::Drawing::Point(15, 57);
			this->chk640_700PM->Name = L"chk640_700PM";
			this->chk640_700PM->Size = System::Drawing::Size(118, 22);
			this->chk640_700PM->TabIndex = 22;
			this->chk640_700PM->Text = L"6:40 PM - 7:00 PM";
			// 
			// chk620_640PM
			// 
			this->chk620_640PM->Location = System::Drawing::Point(15, 34);
			this->chk620_640PM->Name = L"chk620_640PM";
			this->chk620_640PM->Size = System::Drawing::Size(118, 22);
			this->chk620_640PM->TabIndex = 19;
			this->chk620_640PM->Text = L"6:20 PM - 6:40 PM";
			// 
			// chk600_620PM
			// 
			this->chk600_620PM->Location = System::Drawing::Point(15, 12);
			this->chk600_620PM->Name = L"chk600_620PM";
			this->chk600_620PM->Size = System::Drawing::Size(118, 22);
			this->chk600_620PM->TabIndex = 18;
			this->chk600_620PM->Text = L"6:00 PM - 6:20 PM";
			// 
			// pnl5_6PM
			// 
			this->pnl5_6PM->Controls->Add(this->chk540_600PM);
			this->pnl5_6PM->Controls->Add(this->chk520_540PM);
			this->pnl5_6PM->Controls->Add(this->chk500_520PM);
			this->pnl5_6PM->Location = System::Drawing::Point(1314, 264);
			this->pnl5_6PM->Name = L"pnl5_6PM";
			this->pnl5_6PM->Size = System::Drawing::Size(264, 76);
			this->pnl5_6PM->TabIndex = 37;
			this->pnl5_6PM->Visible = false;
			// 
			// chk540_600PM
			// 
			this->chk540_600PM->Location = System::Drawing::Point(15, 57);
			this->chk540_600PM->Name = L"chk540_600PM";
			this->chk540_600PM->Size = System::Drawing::Size(118, 22);
			this->chk540_600PM->TabIndex = 22;
			this->chk540_600PM->Text = L"5:40 PM - 6:00 PM";
			// 
			// chk520_540PM
			// 
			this->chk520_540PM->Location = System::Drawing::Point(15, 34);
			this->chk520_540PM->Name = L"chk520_540PM";
			this->chk520_540PM->Size = System::Drawing::Size(118, 22);
			this->chk520_540PM->TabIndex = 19;
			this->chk520_540PM->Text = L"5:20 PM - 5:40 PM";
			// 
			// chk500_520PM
			// 
			this->chk500_520PM->Location = System::Drawing::Point(15, 12);
			this->chk500_520PM->Name = L"chk500_520PM";
			this->chk500_520PM->Size = System::Drawing::Size(118, 22);
			this->chk500_520PM->TabIndex = 18;
			this->chk500_520PM->Text = L"5:00 PM - 5:20 PM";
			// 
			// pnl4_5PM
			// 
			this->pnl4_5PM->Controls->Add(this->chk440_500PM);
			this->pnl4_5PM->Controls->Add(this->chk420_440PM);
			this->pnl4_5PM->Controls->Add(this->chk400_420PM);
			this->pnl4_5PM->Location = System::Drawing::Point(1314, 179);
			this->pnl4_5PM->Name = L"pnl4_5PM";
			this->pnl4_5PM->Size = System::Drawing::Size(264, 76);
			this->pnl4_5PM->TabIndex = 36;
			this->pnl4_5PM->Visible = false;
			// 
			// chk440_500PM
			// 
			this->chk440_500PM->Location = System::Drawing::Point(15, 57);
			this->chk440_500PM->Name = L"chk440_500PM";
			this->chk440_500PM->Size = System::Drawing::Size(118, 22);
			this->chk440_500PM->TabIndex = 22;
			this->chk440_500PM->Text = L"4:40 PM - 5:00 PM";
			// 
			// chk420_440PM
			// 
			this->chk420_440PM->Location = System::Drawing::Point(15, 34);
			this->chk420_440PM->Name = L"chk420_440PM";
			this->chk420_440PM->Size = System::Drawing::Size(118, 22);
			this->chk420_440PM->TabIndex = 19;
			this->chk420_440PM->Text = L"4:20 PM - 4:40 PM";
			// 
			// chk400_420PM
			// 
			this->chk400_420PM->Location = System::Drawing::Point(15, 12);
			this->chk400_420PM->Name = L"chk400_420PM";
			this->chk400_420PM->Size = System::Drawing::Size(118, 22);
			this->chk400_420PM->TabIndex = 18;
			this->chk400_420PM->Text = L"4:00 PM - 4:20 PM";
			// 
			// pnl3_4PM
			// 
			this->pnl3_4PM->Controls->Add(this->chk340_400PM);
			this->pnl3_4PM->Controls->Add(this->chk320_340PM);
			this->pnl3_4PM->Controls->Add(this->chk300_320PM);
			this->pnl3_4PM->Location = System::Drawing::Point(1314, 94);
			this->pnl3_4PM->Name = L"pnl3_4PM";
			this->pnl3_4PM->Size = System::Drawing::Size(264, 76);
			this->pnl3_4PM->TabIndex = 35;
			this->pnl3_4PM->Visible = false;
			// 
			// chk340_400PM
			// 
			this->chk340_400PM->Location = System::Drawing::Point(15, 57);
			this->chk340_400PM->Name = L"chk340_400PM";
			this->chk340_400PM->Size = System::Drawing::Size(118, 22);
			this->chk340_400PM->TabIndex = 22;
			this->chk340_400PM->Text = L"3:40 PM - 4:00 PM";
			// 
			// chk320_340PM
			// 
			this->chk320_340PM->Location = System::Drawing::Point(15, 34);
			this->chk320_340PM->Name = L"chk320_340PM";
			this->chk320_340PM->Size = System::Drawing::Size(118, 22);
			this->chk320_340PM->TabIndex = 19;
			this->chk320_340PM->Text = L"3:20 PM - 3:40 PM";
			// 
			// chk300_320PM
			// 
			this->chk300_320PM->Location = System::Drawing::Point(15, 12);
			this->chk300_320PM->Name = L"chk300_320PM";
			this->chk300_320PM->Size = System::Drawing::Size(118, 22);
			this->chk300_320PM->TabIndex = 18;
			this->chk300_320PM->Text = L"3:00 PM - 3:20 PM";
			// 
			// pnl8_9AM
			// 
			this->pnl8_9AM->Controls->Add(this->chk840_900AM);
			this->pnl8_9AM->Controls->Add(this->chk820_840AM);
			this->pnl8_9AM->Controls->Add(this->chk800_820AM);
			this->pnl8_9AM->Location = System::Drawing::Point(1021, 282);
			this->pnl8_9AM->Name = L"pnl8_9AM";
			this->pnl8_9AM->Size = System::Drawing::Size(264, 76);
			this->pnl8_9AM->TabIndex = 32;
			this->pnl8_9AM->Visible = false;
			// 
			// chk840_900AM
			// 
			this->chk840_900AM->Location = System::Drawing::Point(15, 57);
			this->chk840_900AM->Name = L"chk840_900AM";
			this->chk840_900AM->Size = System::Drawing::Size(118, 22);
			this->chk840_900AM->TabIndex = 22;
			this->chk840_900AM->Text = L"8:40 AM - 9:00 AM";
			this->chk840_900AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk840_900AM_CheckedChanged);
			// 
			// chk820_840AM
			// 
			this->chk820_840AM->Location = System::Drawing::Point(15, 34);
			this->chk820_840AM->Name = L"chk820_840AM";
			this->chk820_840AM->Size = System::Drawing::Size(118, 22);
			this->chk820_840AM->TabIndex = 19;
			this->chk820_840AM->Text = L"8:20 AM - 8:40 AM";
			this->chk820_840AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk820_840AM_CheckedChanged);
			// 
			// chk800_820AM
			// 
			this->chk800_820AM->Location = System::Drawing::Point(15, 12);
			this->chk800_820AM->Name = L"chk800_820AM";
			this->chk800_820AM->Size = System::Drawing::Size(118, 22);
			this->chk800_820AM->TabIndex = 18;
			this->chk800_820AM->Text = L"8:00 AM - 8:20 AM";
			this->chk800_820AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk800_820AM_CheckedChanged);
			// 
			// pnl6_7AM
			// 
			this->pnl6_7AM->Controls->Add(this->chk640_700AM);
			this->pnl6_7AM->Controls->Add(this->chk620_640AM);
			this->pnl6_7AM->Controls->Add(this->chk600_620AM);
			this->pnl6_7AM->Location = System::Drawing::Point(1021, 112);
			this->pnl6_7AM->Name = L"pnl6_7AM";
			this->pnl6_7AM->Size = System::Drawing::Size(264, 76);
			this->pnl6_7AM->TabIndex = 30;
			this->pnl6_7AM->Visible = false;
			// 
			// chk640_700AM
			// 
			this->chk640_700AM->Location = System::Drawing::Point(15, 57);
			this->chk640_700AM->Name = L"chk640_700AM";
			this->chk640_700AM->Size = System::Drawing::Size(118, 22);
			this->chk640_700AM->TabIndex = 22;
			this->chk640_700AM->Text = L"6:40 AM - 7:00 AM";
			this->chk640_700AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk640_700AM_CheckedChanged);
			// 
			// chk620_640AM
			// 
			this->chk620_640AM->Location = System::Drawing::Point(15, 34);
			this->chk620_640AM->Name = L"chk620_640AM";
			this->chk620_640AM->Size = System::Drawing::Size(118, 22);
			this->chk620_640AM->TabIndex = 19;
			this->chk620_640AM->Text = L"6:20 AM - 6:40 AM";
			this->chk620_640AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk620_640AM_CheckedChanged);
			// 
			// chk600_620AM
			// 
			this->chk600_620AM->Location = System::Drawing::Point(15, 12);
			this->chk600_620AM->Name = L"chk600_620AM";
			this->chk600_620AM->Size = System::Drawing::Size(118, 22);
			this->chk600_620AM->TabIndex = 18;
			this->chk600_620AM->Text = L"6:00 AM - 6:20 AM";
			this->chk600_620AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk600_620AM_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(820, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 13);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Select Available Times";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(591, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Hours:";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->checkBox8);
			this->panel2->Controls->Add(this->checkBox9);
			this->panel2->Controls->Add(this->checkBox10);
			this->panel2->Location = System::Drawing::Point(481, 533);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(264, 76);
			this->panel2->TabIndex = 33;
			this->panel2->Visible = false;
			// 
			// checkBox8
			// 
			this->checkBox8->Location = System::Drawing::Point(15, 57);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(118, 22);
			this->checkBox8->TabIndex = 22;
			this->checkBox8->Text = L"7:40 PM - 8:00 PM";
			// 
			// checkBox9
			// 
			this->checkBox9->Location = System::Drawing::Point(15, 34);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(118, 22);
			this->checkBox9->TabIndex = 19;
			this->checkBox9->Text = L"7:20 PM - 7:40 PM";
			// 
			// checkBox10
			// 
			this->checkBox10->Location = System::Drawing::Point(15, 12);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(118, 22);
			this->checkBox10->TabIndex = 18;
			this->checkBox10->Text = L"7:00 PM - 7:20 PM";
			// 
			// pnl10_11AM
			// 
			this->pnl10_11AM->Controls->Add(this->chk1040_1100AM);
			this->pnl10_11AM->Controls->Add(this->chk1020_1040AM);
			this->pnl10_11AM->Controls->Add(this->chk1000_1020AM);
			this->pnl10_11AM->Location = System::Drawing::Point(1021, 449);
			this->pnl10_11AM->Name = L"pnl10_11AM";
			this->pnl10_11AM->Size = System::Drawing::Size(264, 76);
			this->pnl10_11AM->TabIndex = 34;
			this->pnl10_11AM->Visible = false;
			// 
			// chk1040_1100AM
			// 
			this->chk1040_1100AM->Location = System::Drawing::Point(15, 57);
			this->chk1040_1100AM->Name = L"chk1040_1100AM";
			this->chk1040_1100AM->Size = System::Drawing::Size(131, 22);
			this->chk1040_1100AM->TabIndex = 22;
			this->chk1040_1100AM->Text = L"10:40 AM - 11:00 AM";
			this->chk1040_1100AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk1040_1100AM_CheckedChanged);
			// 
			// chk1020_1040AM
			// 
			this->chk1020_1040AM->Location = System::Drawing::Point(15, 34);
			this->chk1020_1040AM->Name = L"chk1020_1040AM";
			this->chk1020_1040AM->Size = System::Drawing::Size(131, 22);
			this->chk1020_1040AM->TabIndex = 19;
			this->chk1020_1040AM->Text = L"10:20 AM - 10:40 AM";
			this->chk1020_1040AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk1020_1040AM_CheckedChanged);
			// 
			// chk1000_1020AM
			// 
			this->chk1000_1020AM->Location = System::Drawing::Point(15, 12);
			this->chk1000_1020AM->Name = L"chk1000_1020AM";
			this->chk1000_1020AM->Size = System::Drawing::Size(131, 22);
			this->chk1000_1020AM->TabIndex = 18;
			this->chk1000_1020AM->Text = L"10:00 AM - 10:20 AM";
			this->chk1000_1020AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk1000_1020AM_CheckedChanged);
			// 
			// pnl9_10AM
			// 
			this->pnl9_10AM->Controls->Add(this->chk940_10000AM);
			this->pnl9_10AM->Controls->Add(this->chk920_940AM);
			this->pnl9_10AM->Controls->Add(this->chk900_920AM);
			this->pnl9_10AM->Location = System::Drawing::Point(1021, 367);
			this->pnl9_10AM->Name = L"pnl9_10AM";
			this->pnl9_10AM->Size = System::Drawing::Size(264, 76);
			this->pnl9_10AM->TabIndex = 34;
			this->pnl9_10AM->Visible = false;
			// 
			// chk940_10000AM
			// 
			this->chk940_10000AM->Location = System::Drawing::Point(15, 57);
			this->chk940_10000AM->Name = L"chk940_10000AM";
			this->chk940_10000AM->Size = System::Drawing::Size(123, 22);
			this->chk940_10000AM->TabIndex = 22;
			this->chk940_10000AM->Text = L"9:40 AM - 10:00 AM";
			this->chk940_10000AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk940_10000AM_CheckedChanged);
			// 
			// chk920_940AM
			// 
			this->chk920_940AM->Location = System::Drawing::Point(15, 34);
			this->chk920_940AM->Name = L"chk920_940AM";
			this->chk920_940AM->Size = System::Drawing::Size(118, 22);
			this->chk920_940AM->TabIndex = 19;
			this->chk920_940AM->Text = L"9:20 AM - 9:40 AM";
			this->chk920_940AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk920_940AM_CheckedChanged);
			// 
			// chk900_920AM
			// 
			this->chk900_920AM->Location = System::Drawing::Point(15, 12);
			this->chk900_920AM->Name = L"chk900_920AM";
			this->chk900_920AM->Size = System::Drawing::Size(118, 22);
			this->chk900_920AM->TabIndex = 18;
			this->chk900_920AM->Text = L"9:00 AM - 9:20 AM";
			this->chk900_920AM->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chk900_920AM_CheckedChanged);
			// 
			// pnl2_3PM
			// 
			this->pnl2_3PM->Controls->Add(this->chk240_300PM);
			this->pnl2_3PM->Controls->Add(this->chk220_240PM);
			this->pnl2_3PM->Controls->Add(this->chk200_220PM);
			this->pnl2_3PM->Location = System::Drawing::Point(1314, 12);
			this->pnl2_3PM->Name = L"pnl2_3PM";
			this->pnl2_3PM->Size = System::Drawing::Size(264, 76);
			this->pnl2_3PM->TabIndex = 34;
			this->pnl2_3PM->Visible = false;
			// 
			// chk240_300PM
			// 
			this->chk240_300PM->Location = System::Drawing::Point(15, 57);
			this->chk240_300PM->Name = L"chk240_300PM";
			this->chk240_300PM->Size = System::Drawing::Size(118, 22);
			this->chk240_300PM->TabIndex = 22;
			this->chk240_300PM->Text = L"2:40 PM - 3:00 PM";
			// 
			// chk220_240PM
			// 
			this->chk220_240PM->Location = System::Drawing::Point(15, 34);
			this->chk220_240PM->Name = L"chk220_240PM";
			this->chk220_240PM->Size = System::Drawing::Size(118, 22);
			this->chk220_240PM->TabIndex = 19;
			this->chk220_240PM->Text = L"2:20 PM - 2:40 PM";
			// 
			// chk200_220PM
			// 
			this->chk200_220PM->Location = System::Drawing::Point(15, 12);
			this->chk200_220PM->Name = L"chk200_220PM";
			this->chk200_220PM->Size = System::Drawing::Size(118, 22);
			this->chk200_220PM->TabIndex = 18;
			this->chk200_220PM->Text = L"2:00 PM - 2:20 PM";
			// 
			// pnl8_9PM
			// 
			this->pnl8_9PM->Controls->Add(this->chk840_900PM);
			this->pnl8_9PM->Controls->Add(this->chk820_840PM);
			this->pnl8_9PM->Controls->Add(this->chk800_820PM);
			this->pnl8_9PM->Location = System::Drawing::Point(1314, 517);
			this->pnl8_9PM->Name = L"pnl8_9PM";
			this->pnl8_9PM->Size = System::Drawing::Size(264, 76);
			this->pnl8_9PM->TabIndex = 33;
			this->pnl8_9PM->Visible = false;
			// 
			// chk840_900PM
			// 
			this->chk840_900PM->Location = System::Drawing::Point(15, 57);
			this->chk840_900PM->Name = L"chk840_900PM";
			this->chk840_900PM->Size = System::Drawing::Size(118, 22);
			this->chk840_900PM->TabIndex = 22;
			this->chk840_900PM->Text = L"8:40 PM - 9:00 PM";
			// 
			// chk820_840PM
			// 
			this->chk820_840PM->Location = System::Drawing::Point(15, 34);
			this->chk820_840PM->Name = L"chk820_840PM";
			this->chk820_840PM->Size = System::Drawing::Size(118, 22);
			this->chk820_840PM->TabIndex = 19;
			this->chk820_840PM->Text = L"8:20 PM - 8:40 PM";
			// 
			// chk800_820PM
			// 
			this->chk800_820PM->Location = System::Drawing::Point(15, 12);
			this->chk800_820PM->Name = L"chk800_820PM";
			this->chk800_820PM->Size = System::Drawing::Size(118, 22);
			this->chk800_820PM->TabIndex = 18;
			this->chk800_820PM->Text = L"8:00 PM - 8:20 PM";
			// 
			// pnl9_10PM
			// 
			this->pnl9_10PM->Controls->Add(this->chk940_1000PM);
			this->pnl9_10PM->Controls->Add(this->chk920_940PM);
			this->pnl9_10PM->Controls->Add(this->chk900_920PM);
			this->pnl9_10PM->Location = System::Drawing::Point(1314, 602);
			this->pnl9_10PM->Name = L"pnl9_10PM";
			this->pnl9_10PM->Size = System::Drawing::Size(264, 76);
			this->pnl9_10PM->TabIndex = 33;
			this->pnl9_10PM->Visible = false;
			// 
			// chk940_1000PM
			// 
			this->chk940_1000PM->Location = System::Drawing::Point(15, 57);
			this->chk940_1000PM->Name = L"chk940_1000PM";
			this->chk940_1000PM->Size = System::Drawing::Size(127, 22);
			this->chk940_1000PM->TabIndex = 22;
			this->chk940_1000PM->Text = L"9:40 PM - 10:00 PM";
			// 
			// chk920_940PM
			// 
			this->chk920_940PM->Location = System::Drawing::Point(15, 34);
			this->chk920_940PM->Name = L"chk920_940PM";
			this->chk920_940PM->Size = System::Drawing::Size(118, 22);
			this->chk920_940PM->TabIndex = 19;
			this->chk920_940PM->Text = L"9:20 PM - 9:40 PM";
			// 
			// chk900_920PM
			// 
			this->chk900_920PM->Location = System::Drawing::Point(15, 12);
			this->chk900_920PM->Name = L"chk900_920PM";
			this->chk900_920PM->Size = System::Drawing::Size(118, 22);
			this->chk900_920PM->TabIndex = 18;
			this->chk900_920PM->Text = L"9:00 PM - 9:20 PM";
			// 
			// pnl10_11PM
			// 
			this->pnl10_11PM->Controls->Add(this->chk1040_1100PM);
			this->pnl10_11PM->Controls->Add(this->chk1020_1040PM);
			this->pnl10_11PM->Controls->Add(this->chk1000_1020PM);
			this->pnl10_11PM->Location = System::Drawing::Point(1314, 687);
			this->pnl10_11PM->Name = L"pnl10_11PM";
			this->pnl10_11PM->Size = System::Drawing::Size(264, 76);
			this->pnl10_11PM->TabIndex = 33;
			this->pnl10_11PM->Visible = false;
			// 
			// chk1040_1100PM
			// 
			this->chk1040_1100PM->Location = System::Drawing::Point(15, 57);
			this->chk1040_1100PM->Name = L"chk1040_1100PM";
			this->chk1040_1100PM->Size = System::Drawing::Size(127, 22);
			this->chk1040_1100PM->TabIndex = 22;
			this->chk1040_1100PM->Text = L"10:40 PM - 11:00 PM";
			// 
			// chk1020_1040PM
			// 
			this->chk1020_1040PM->Location = System::Drawing::Point(15, 34);
			this->chk1020_1040PM->Name = L"chk1020_1040PM";
			this->chk1020_1040PM->Size = System::Drawing::Size(127, 22);
			this->chk1020_1040PM->TabIndex = 19;
			this->chk1020_1040PM->Text = L"10:20 PM - 10:40 PM";
			// 
			// chk1000_1020PM
			// 
			this->chk1000_1020PM->Location = System::Drawing::Point(15, 12);
			this->chk1000_1020PM->Name = L"chk1000_1020PM";
			this->chk1000_1020PM->Size = System::Drawing::Size(127, 22);
			this->chk1000_1020PM->TabIndex = 18;
			this->chk1000_1020PM->Text = L"10:00 PM - 10:20 PM";
			// 
			// pnl11_12AM
			// 
			this->pnl11_12AM->Controls->Add(this->chk1140_1200AM);
			this->pnl11_12AM->Controls->Add(this->chk1120_1140PM);
			this->pnl11_12AM->Controls->Add(this->chk1100_1120PM);
			this->pnl11_12AM->Location = System::Drawing::Point(1314, 769);
			this->pnl11_12AM->Name = L"pnl11_12AM";
			this->pnl11_12AM->Size = System::Drawing::Size(264, 76);
			this->pnl11_12AM->TabIndex = 33;
			this->pnl11_12AM->Visible = false;
			// 
			// chk1140_1200AM
			// 
			this->chk1140_1200AM->Location = System::Drawing::Point(15, 57);
			this->chk1140_1200AM->Name = L"chk1140_1200AM";
			this->chk1140_1200AM->Size = System::Drawing::Size(127, 22);
			this->chk1140_1200AM->TabIndex = 22;
			this->chk1140_1200AM->Text = L"11:40 PM - 12:00 AM";
			// 
			// chk1120_1140PM
			// 
			this->chk1120_1140PM->Location = System::Drawing::Point(15, 34);
			this->chk1120_1140PM->Name = L"chk1120_1140PM";
			this->chk1120_1140PM->Size = System::Drawing::Size(127, 22);
			this->chk1120_1140PM->TabIndex = 19;
			this->chk1120_1140PM->Text = L"11:20 PM - 11:40 PM";
			// 
			// chk1100_1120PM
			// 
			this->chk1100_1120PM->Location = System::Drawing::Point(15, 12);
			this->chk1100_1120PM->Name = L"chk1100_1120PM";
			this->chk1100_1120PM->Size = System::Drawing::Size(127, 22);
			this->chk1100_1120PM->TabIndex = 18;
			this->chk1100_1120PM->Text = L"11:00 PM - 11:20 PM";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1604, 881);
			this->Controls->Add(this->pnl7_8AM);
			this->Controls->Add(this->pnl1_2PM);
			this->Controls->Add(this->pnl7_8PM);
			this->Controls->Add(this->pnl11_12PM);
			this->Controls->Add(this->pnl11_12AM);
			this->Controls->Add(this->pnl10_11PM);
			this->Controls->Add(this->pnl9_10PM);
			this->Controls->Add(this->pnl8_9PM);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pnl6_7PM);
			this->Controls->Add(this->pnl8_9AM);
			this->Controls->Add(this->pnl5_6PM);
			this->Controls->Add(this->pnl10_11AM);
			this->Controls->Add(this->pnl4_5PM);
			this->Controls->Add(this->pnl6_7AM);
			this->Controls->Add(this->pnl3_4PM);
			this->Controls->Add(this->pnl9_10AM);
			this->Controls->Add(this->pnl2_3PM);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pnl5_6AM);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->grpAvailability);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->grpUser);
			this->Controls->Add(this->grpAdmin);
			this->Controls->Add(this->grpCreateEvent);
			this->Controls->Add(this->grpLogin);
			this->Name = L"MyForm";
			this->Text = L"Doodle";
			this->grpCreateEvent->ResumeLayout(false);
			this->grpCreateEvent->PerformLayout();
			this->grpAdmin->ResumeLayout(false);
			this->grpAdmin->PerformLayout();
			this->grpUser->ResumeLayout(false);
			this->grpUser->PerformLayout();
			this->grpLogin->ResumeLayout(false);
			this->grpLogin->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->grpAvailability->ResumeLayout(false);
			this->grpAvailability->PerformLayout();
			this->pnl24Hr->ResumeLayout(false);
			this->pnl24Hr->PerformLayout();
			this->pnl12Hr->ResumeLayout(false);
			this->pnl12Hr->PerformLayout();
			this->pnl5_6AM->ResumeLayout(false);
			this->pnl7_8AM->ResumeLayout(false);
			this->pnl1_2PM->ResumeLayout(false);
			this->pnl11_12PM->ResumeLayout(false);
			this->pnl7_8PM->ResumeLayout(false);
			this->pnl6_7PM->ResumeLayout(false);
			this->pnl5_6PM->ResumeLayout(false);
			this->pnl4_5PM->ResumeLayout(false);
			this->pnl3_4PM->ResumeLayout(false);
			this->pnl8_9AM->ResumeLayout(false);
			this->pnl6_7AM->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->pnl10_11AM->ResumeLayout(false);
			this->pnl9_10AM->ResumeLayout(false);
			this->pnl2_3PM->ResumeLayout(false);
			this->pnl8_9PM->ResumeLayout(false);
			this->pnl9_10PM->ResumeLayout(false);
			this->pnl10_11PM->ResumeLayout(false);
			this->pnl11_12AM->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		DateTime mPrevDate;
		bool mBusy;

	private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, EventArgs^ e)
	{
		/*if (!mBusy) {
			mBusy = true;
			//DateTime dt = dateTimePicker2->Value;
			//if ((dt.Minute * 60 + dt.Second) % 300 != 0) {
			//	TimeSpan diff = dt - mPrevDate;
			//	if (diff.Ticks < 0)
			//	{
					//dateTimePicker2->Value = mPrevDate.AddMinutes(-20);
			//	}
				//else dateTimePicker2->Value = mPrevDate.AddMinutes(20);
			}
			mBusy = false;
		//}
		//mPrevDate = dateTimePicker2->Value;*/
	}



	private: System::Void dateTimePicker2_KeyPress(System::Object^ sender, KeyEventArgs^ e)		 
	{
		// e->SuppressKeyPress = true;
		e->SuppressKeyPress = true;
	}

	/*private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (txtUser->Text == "admin")
		{
			if (txtPassword->Text == "password")
			{
				grpLogin->Visible = false;
				grpAdmin->Visible = true;
			}
			else
			{
				//lblSignedIn->Text = "Incorrect login information";
			}
		}
		else if (txtUser->Text == "user")
		{
			if (txtPassword->Text == "password")
			{
				grpLogin->Visible = false;
				grpUser->Visible = true;
			}
			else
			{
				//lblSignedIn->Text = "Incorrect login information";
			}
		}
	}*/
	private: System::Void btnCreateEvent_Click(System::Object^  sender, System::EventArgs^  e) {
		grpCreateEvent->Visible = true;
		grpAdmin->Visible = false;
		mPrevDate = mPrevDate.AddYears(2000);


	}


	private: System::Void monthCalendar1_DateChanged_1(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	}
	private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {

		//DateTime date = DateTime(2018, 6, 10);
		//monthCalendar1->AddBoldedDate(date);

		/*
		* Get Calendar date here
		*/


	}


private: System::Void btnViewSchedule_Click(System::Object^  sender, System::EventArgs^  e) {
	grpAdmin->Visible = false;
	//grpViewSchedule->Visible = true;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	grpAvailability->Visible = true;
	grpCreateEvent->Visible = false;
}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	grpAdmin->Visible = true;
	groupBox2->Visible = false;
	
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	grpLogin->Visible = false;
	groupBox2->Visible = true;
}
private: System::Void rbtn12Hr_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl12Hr->Visible = true;
	pnl24Hr->Visible = false;
}
private: System::Void rbtn24Hr_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl24Hr->Visible = true;
	pnl12Hr->Visible = false;
}

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	
	
}

private: System::Void chk500_520AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = true;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void chk520_540AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk540_600AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk600_620AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk620_640AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk640_700AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk700_720AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk720_740AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk740_800AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk800_820AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk820_840AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk840_900AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk900_920AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk920_940AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk940_10000AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk1000_1020AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk1020_1040AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk1040_1100AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk1100_1120AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk1120_1140AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk1140_1200PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chk100_120PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void rbtn5_6AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = true;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
	if (!rbtn05_06->Checked)
	{
		//rbtn05_06->Checked = true;
	}
}
private: System::Void rbtn6_7AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = true;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn7_8AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = true;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn8_9AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = true;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn9_10AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = true;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn10_11AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = true;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn11_12PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = true;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn1_2PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = true;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn2_3PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = true;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn3_4PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = true;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn4_5PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = true;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn5_6PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = true;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn6_7PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = true;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn7_8PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = true;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn8_9PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = true;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn9_10PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = true;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn10_11PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = true;
	pnl11_12AM->Visible = false;
}
private: System::Void rbtn11_12AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	pnl5_6AM->Visible = false;
	pnl6_7AM->Visible = false;
	pnl7_8AM->Visible = false;
	pnl8_9AM->Visible = false;
	pnl9_10AM->Visible = false;
	pnl10_11AM->Visible = false;
	pnl11_12PM->Visible = false;
	pnl1_2PM->Visible = false;
	pnl2_3PM->Visible = false;
	pnl3_4PM->Visible = false;
	pnl4_5PM->Visible = false;
	pnl5_6PM->Visible = false;
	pnl6_7PM->Visible = false;
	pnl7_8PM->Visible = false;
	pnl8_9PM->Visible = false;
	pnl9_10PM->Visible = false;
	pnl10_11PM->Visible = false;
	pnl11_12AM->Visible = true;
}

private: System::Void rbtn05_06_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (!rbtn5_6AM->Checked)
	{
		rbtn5_6AM->Checked = true;
	}
}
private: System::Void rbtn06_07_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn6_7AM->Checked = true;
}
private: System::Void rbtn07_08_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn7_8AM->Checked = true;
}
private: System::Void rbtn08_09_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn8_9AM->Checked = true;
}
private: System::Void rbtn09_10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn9_10AM->Checked = true;
}
private: System::Void rbtn10_11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn10_11AM->Checked = true;
}
private: System::Void rbtn11_12_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn11_12PM->Checked = true;
}
private: System::Void rbtn13_14_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn1_2PM->Checked = true;
}
private: System::Void rbtn14_15_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn2_3PM->Checked = true;
}
private: System::Void rbtn15_16_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn3_4PM->Checked = true;
}
private: System::Void rbtn16_17_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn4_5PM->Checked = true;
}
private: System::Void rbtn17_18_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn5_6PM->Checked = true;
}
private: System::Void rbtn18_19_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn6_7PM->Checked = true;
}
private: System::Void rbtn19_20_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn7_8PM->Checked = true;
}
private: System::Void rbtn20_21_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn8_9PM->Checked = true;
}
private: System::Void rbtn21_22_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn9_10PM->Checked = true;
}
private: System::Void rbtn22_23_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn10_11PM->Checked = true;
}
private: System::Void rbtn23_00_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	rbtn11_12AM->Checked = true;
}
};


}

