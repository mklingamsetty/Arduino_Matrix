
 

//COLUMNS - Pins assignment
#define Column1 13
#define Column2 6
#define Column3 2
#define Column4 3
#define Column5 4
#define Column6 5
#define Column7 1
#define Total_Columns 8
#define Supported_Columns 6

int columns[Total_Columns] = {Column1, Column2, Column3, Column4, Column5, Column6, Column7};

//ROWS - Pins assignment
#define Row1 7 
#define Row2 8
#define Row3 9
#define Row4 10
#define Row5 11
#define Row6 12
#define Row7 0
#define Total_Rows 7
#define Supported_Rows 6

int rows[Total_Rows] = {Row1, Row2, Row3, Row4, Row5, Row6, Row7};

int digit_0[Total_Rows]= { 0x08, // {0,0,1,1,0,0,0},
                           0x18, // {0,1,0,0,1,0,0},
                           0x28, // {0,1,0,0,1,0,0},
                           0x08, // {0,1,0,0,1,0,0},
                           0x08, // {0,0,1,1,0,0,0},
                           0x3E, // {0,0,0,0,0,0,0},
                           0x00 };//{0,0,0,0,0,0,0} }
int digit_1[Total_Rows]= { 0x08, // {0,0,0,1,0,0,0},
                           0x18, // {0,0,1,1,0,0,0},
                           0x28, // {0,1,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x3E, // {0,1,1,1,1,1,0},
                           0x00 };//{0,0,0,0,0,0,0} }
int digit_2[Total_Rows]= { 0x08, // {0,1,1,1,0,0,0},
                           0x18, // {0,0,0,1,0,0,0},
                           0x28, // {0,1,1,1,0,0,0},
                           0x08, // {0,1,0,0,0,0,0},
                           0x08, // {0,1,1,1,0,0,0},
                           0x3E, // {0,0,0,0,0,0,0},
                           0x00 };//{0,0,0,0,0,0,0} }
int digit_3[Total_Rows]= { 0x08, // {0,0,0,1,0,0,0},
                           0x18, // {0,0,1,1,0,0,0},
                           0x28, // {0,1,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x3E, // {0,1,1,1,1,1,0},
                           0x00 };//{0,0,0,0,0,0,0} }
int digit_4[Total_Rows]= { 0x08, // {0,0,0,1,0,0,0},
                           0x18, // {0,0,1,1,0,0,0},
                           0x28, // {0,1,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x3E, // {0,1,1,1,1,1,0},
                           0x00 };//{0,0,0,0,0,0,0} }
int digit_5[Total_Rows]= { 0x08, // {0,0,0,1,0,0,0},
                           0x18, // {0,0,1,1,0,0,0},
                           0x28, // {0,1,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x3E, // {0,1,1,1,1,1,0},
                           0x00 };//{0,0,0,0,0,0,0} }
int digit_6[Total_Rows]= { 0x08, // {0,0,0,1,0,0,0},
                           0x18, // {0,0,1,1,0,0,0},
                           0x28, // {0,1,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x3E, // {0,1,1,1,1,1,0},
                           0x00 };//{0,0,0,0,0,0,0} }
int digit_7[Total_Rows]= { 0x08, // {0,0,0,1,0,0,0},
                           0x18, // {0,0,1,1,0,0,0},
                           0x28, // {0,1,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x3E, // {0,1,1,1,1,1,0},
                           0x00 };//{0,0,0,0,0,0,0} }
int digit_8[Total_Rows]= { 0x08, // {0,0,0,1,0,0,0},
                           0x18, // {0,0,1,1,0,0,0},
                           0x28, // {0,1,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x3E, // {0,1,1,1,1,1,0},
                           0x00 };//{0,0,0,0,0,0,0} }
int digit_9[Total_Rows]= { 0x08, // {0,0,0,1,0,0,0},
                           0x18, // {0,0,1,1,0,0,0},
                           0x28, // {0,1,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x08, // {0,0,0,1,0,0,0},
                           0x3E, // {0,1,1,1,1,1,0},
                           0x00 };//{0,0,0,0,0,0,0} }
                                            
int* digits[] = { digit_0,digit_1,digit_2,digit_3,digit_4,digit_5,digit_6,digit_7,digit_8,digit_9};

void setup() {
  // put your setup code here, to run once:

pinMode(Column1, OUTPUT);
pinMode(Column2, OUTPUT);
pinMode(Column3, OUTPUT);
pinMode(Column4, OUTPUT);
pinMode(Column5, OUTPUT);
pinMode(Column6, OUTPUT);
pinMode(Column7, OUTPUT);

pinMode(Row1, OUTPUT);
pinMode(Row2, OUTPUT);
pinMode(Row3, OUTPUT);
pinMode(Row4, OUTPUT);
pinMode(Row5, OUTPUT);
pinMode(Row6, OUTPUT);
pinMode(Row7, OUTPUT);

//digitalWrite(13, HIGH);
digitalWrite(Column1, LOW);
digitalWrite(Column2, LOW);
digitalWrite(Column3, LOW);
digitalWrite(Column4, LOW);
digitalWrite(Column5, LOW);
digitalWrite(Column6, LOW);
digitalWrite(Column7, LOW);

digitalWrite(Row1, HIGH);
digitalWrite(Row2, HIGH);
digitalWrite(Row3, HIGH);
digitalWrite(Row4, HIGH);
digitalWrite(Row5, HIGH);
digitalWrite(Row6, HIGH);                              
digitalWrite(Row7, HIGH);

Serial.begin(9600);

}


void loop()
{

//  for(int i = 0; i < Total_Rows; i++)
//  {
//    digitalWrite(rows[i], LOW);
//    for(int j = 0; j < Total_Columns; j++)
//    {
//      digitalWrite(columns[j], HIGH);
//
//      delay(100);
//
//      digitalWrite(columns[j], LOW);
//    }
//    digitalWrite(rows[i], HIGH);
//  }
  
int* digit = NULL;
int row_byte = 0;
int col = 0;


  //display all digits from 0 to 9
  for(int i = 0; i < 10; i++)
  {
    //get the digit 
    digit = digits[i];    
    
    //for each row of the digit
    for(int j=0; j < Total_Rows; j++)
    {
      //turn on the row
      digitalWrite(rows[j], LOW);
      
      //get the row byte
      row_byte = digit[j];

      //for each column
      for(int k = 0; k < 8; k++)
      {
        if(row_byte & (1 << k))
        {
          //turn on column
          digitalWrite(columns[k], HIGH);
        }
        else
        {
          //turn off column
          digitalWrite(columns[k], LOW);          
        }
      }
      delay(1000);
    }
  }
}
