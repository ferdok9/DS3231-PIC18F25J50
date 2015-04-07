
#include "SSD1306.h"

const uint8 BasicFont[][8]=
{
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x5F,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x07,0x00,0x07,0x00,0x00,0x00},
  {0x00,0x14,0x7F,0x14,0x7F,0x14,0x00,0x00},
  {0x00,0x24,0x2A,0x7F,0x2A,0x12,0x00,0x00},
  {0x00,0x23,0x13,0x08,0x64,0x62,0x00,0x00},
  {0x00,0x36,0x49,0x55,0x22,0x50,0x00,0x00},
  {0x00,0x00,0x05,0x03,0x00,0x00,0x00,0x00},
  {0x00,0x1C,0x22,0x41,0x00,0x00,0x00,0x00},
  {0x00,0x41,0x22,0x1C,0x00,0x00,0x00,0x00},
  {0x00,0x08,0x2A,0x1C,0x2A,0x08,0x00,0x00},
  {0x00,0x08,0x08,0x3E,0x08,0x08,0x00,0x00},
  {0x00,0xA0,0x60,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x08,0x08,0x08,0x08,0x08,0x00,0x00},
  {0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x20,0x10,0x08,0x04,0x02,0x00,0x00},
  {0x00,0x3E,0x51,0x49,0x45,0x3E,0x00,0x00},
  {0x00,0x00,0x42,0x7F,0x40,0x00,0x00,0x00},
  {0x00,0x62,0x51,0x49,0x49,0x46,0x00,0x00},
  {0x00,0x22,0x41,0x49,0x49,0x36,0x00,0x00},
  {0x00,0x18,0x14,0x12,0x7F,0x10,0x00,0x00},
  {0x00,0x27,0x45,0x45,0x45,0x39,0x00,0x00},
  {0x00,0x3C,0x4A,0x49,0x49,0x30,0x00,0x00},
  {0x00,0x01,0x71,0x09,0x05,0x03,0x00,0x00},
  {0x00,0x36,0x49,0x49,0x49,0x36,0x00,0x00},
  {0x00,0x06,0x49,0x49,0x29,0x1E,0x00,0x00},
  {0x00,0x00,0x36,0x36,0x00,0x00,0x00,0x00},
  {0x00,0x00,0xAC,0x6C,0x00,0x00,0x00,0x00},
  {0x00,0x08,0x14,0x22,0x41,0x00,0x00,0x00},
  {0x00,0x14,0x14,0x14,0x14,0x14,0x00,0x00},
  {0x00,0x41,0x22,0x14,0x08,0x00,0x00,0x00},
  {0x00,0x02,0x01,0x51,0x09,0x06,0x00,0x00},
  {0x00,0x32,0x49,0x79,0x41,0x3E,0x00,0x00},
  {0x00,0x7E,0x09,0x09,0x09,0x7E,0x00,0x00},
  {0x00,0x7F,0x49,0x49,0x49,0x36,0x00,0x00},
  {0x00,0x3E,0x41,0x41,0x41,0x22,0x00,0x00},
  {0x00,0x7F,0x41,0x41,0x22,0x1C,0x00,0x00},
  {0x00,0x7F,0x49,0x49,0x49,0x41,0x00,0x00},
  {0x00,0x7F,0x09,0x09,0x09,0x01,0x00,0x00},
  {0x00,0x3E,0x41,0x41,0x51,0x72,0x00,0x00},
  {0x00,0x7F,0x08,0x08,0x08,0x7F,0x00,0x00},
  {0x00,0x41,0x7F,0x41,0x00,0x00,0x00,0x00},
  {0x00,0x20,0x40,0x41,0x3F,0x01,0x00,0x00},
  {0x00,0x7F,0x08,0x14,0x22,0x41,0x00,0x00},
  {0x00,0x7F,0x40,0x40,0x40,0x40,0x00,0x00},
  {0x00,0x7F,0x02,0x0C,0x02,0x7F,0x00,0x00},
  {0x00,0x7F,0x04,0x08,0x10,0x7F,0x00,0x00},
  {0x00,0x3E,0x41,0x41,0x41,0x3E,0x00,0x00},
  {0x00,0x7F,0x09,0x09,0x09,0x06,0x00,0x00},
  {0x00,0x3E,0x41,0x51,0x21,0x5E,0x00,0x00},
  {0x00,0x7F,0x09,0x19,0x29,0x46,0x00,0x00},
  {0x00,0x26,0x49,0x49,0x49,0x32,0x00,0x00},
  {0x00,0x01,0x01,0x7F,0x01,0x01,0x00,0x00},
  {0x00,0x3F,0x40,0x40,0x40,0x3F,0x00,0x00},
  {0x00,0x1F,0x20,0x40,0x20,0x1F,0x00,0x00},
  {0x00,0x3F,0x40,0x38,0x40,0x3F,0x00,0x00},
  {0x00,0x63,0x14,0x08,0x14,0x63,0x00,0x00},
  {0x00,0x03,0x04,0x78,0x04,0x03,0x00,0x00},
  {0x00,0x61,0x51,0x49,0x45,0x43,0x00,0x00},
  {0x00,0x7F,0x41,0x41,0x00,0x00,0x00,0x00},
  {0x00,0x02,0x04,0x08,0x10,0x20,0x00,0x00},
  {0x00,0x41,0x41,0x7F,0x00,0x00,0x00,0x00},
  {0x00,0x04,0x02,0x01,0x02,0x04,0x00,0x00},
  {0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00},
  {0x00,0x01,0x02,0x04,0x00,0x00,0x00,0x00},
  {0x00,0x20,0x54,0x54,0x54,0x78,0x00,0x00},
  {0x00,0x7F,0x48,0x44,0x44,0x38,0x00,0x00},
  {0x00,0x38,0x44,0x44,0x28,0x00,0x00,0x00},
  {0x00,0x38,0x44,0x44,0x48,0x7F,0x00,0x00},
  {0x00,0x38,0x54,0x54,0x54,0x18,0x00,0x00},
  {0x00,0x08,0x7E,0x09,0x02,0x00,0x00,0x00},
  {0x00,0x18,0xA4,0xA4,0xA4,0x7C,0x00,0x00},
  {0x00,0x7F,0x08,0x04,0x04,0x78,0x00,0x00},
  {0x00,0x00,0x7D,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x80,0x84,0x7D,0x00,0x00,0x00,0x00},
  {0x00,0x7F,0x10,0x28,0x44,0x00,0x00,0x00},
  {0x00,0x41,0x7F,0x40,0x00,0x00,0x00,0x00},
  {0x00,0x7C,0x04,0x18,0x04,0x78,0x00,0x00},
  {0x00,0x7C,0x08,0x04,0x7C,0x00,0x00,0x00},
  {0x00,0x38,0x44,0x44,0x38,0x00,0x00,0x00},
  {0x00,0xFC,0x24,0x24,0x18,0x00,0x00,0x00},
  {0x00,0x18,0x24,0x24,0xFC,0x00,0x00,0x00},
  {0x00,0x00,0x7C,0x08,0x04,0x00,0x00,0x00},
  {0x00,0x48,0x54,0x54,0x24,0x00,0x00,0x00},
  {0x00,0x04,0x7F,0x44,0x00,0x00,0x00,0x00},
  {0x00,0x3C,0x40,0x40,0x7C,0x00,0x00,0x00},
  {0x00,0x1C,0x20,0x40,0x20,0x1C,0x00,0x00},
  {0x00,0x3C,0x40,0x30,0x40,0x3C,0x00,0x00},
  {0x00,0x44,0x28,0x10,0x28,0x44,0x00,0x00},
  {0x00,0x1C,0xA0,0xA0,0x7C,0x00,0x00,0x00},
  {0x00,0x44,0x64,0x54,0x4C,0x44,0x00,0x00},
  {0x00,0x08,0x36,0x41,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x41,0x36,0x08,0x00,0x00,0x00,0x00},
  {0x00,0x02,0x01,0x01,0x02,0x01,0x00,0x00},
  {0x00,0x02,0x05,0x05,0x02,0x00,0x00,0x00}
};



uint8 SSD1306_SurchForAddres(uint8 Command)
{
uint8 ACK1=1, ACK2=0, ACK3=0,count = 0;

    for(count=0; (count <=255 && ACK1 == 1); )
    {
        count++;
        i2c_start();

        ACK1 = i2c_write(0 | (count << 2));
        delay_ms(50);
        i2c_stop();
        printf("\n\rcount = %x",(0 | (count << 2)));

    }
    printf("\n\rADDRES = %x",(0 | (count << 2)));
    return (ACK1 | ACK2 | ACK3);
}

////////////////////////////////////////////////////////////////////////////////
uint8 SSD1306_Init_X(void)
{
    uint8 Err=0;
    printf("\n\rInit\n\r1:%x",Err);
    // Init sequence for 128x64 OLED module
    Err=SSD1306_SendCommand(SSD1306_DISPLAY_OFF);                    // 0xAE
    printf("\n\r SSD1306_DISPLAY_OFF  :%x",Err);
    
    Err=SSD1306_SendCommand(SSD1306_SET_DISPLAY_CLOCK_DIV);            // 0xD5
    SSD1306_SendCommand(0x80);                 // the suggested ratio 0x80
    printf("\n\r SSD1306_SET_DISPLAY_CLOCK_DIV  :%x",Err);

    Err=SSD1306_SendCommand(SSD1306_SET_MULTIPLEX);                  // 0xA8
    SSD1306_SendCommand(0x3F);
    printf("\n\r SSD1306_SET_MULTIPLEX  :%x",Err);

    Err=SSD1306_SendCommand(SSD1306_SET_DISPLAY_OFFSET);              // 0xD3
    SSD1306_SendCommand(0x0);                                   // no offset
    printf("\n\r SSD1306_SET_DISPLAY_OFFSET  :%x",Err);

    Err=SSD1306_SendCommand(SSD1306_SET_START_LINE);// | 0x0);        // line #0
    printf("\n\r SSD1306_SET_START_LINE  :%x",Err);

    Err=SSD1306_SendCommand(SSD1306_CHARGE_PUMP);                    // 0x8D
    SSD1306_SendCommand(0x14);  // using internal VCC
    printf("\n\r SSD1306_CHARGE_PUMP  :%x",Err);

    Err=SSD1306_SendCommand(SSD1306_MEMORY_MODE);                    // 0x20
    SSD1306_SendCommand(0x00);          // 0x00 horizontal addressing
    printf("\n\r SSD1306_MEMORY_MODE  :%x",Err);

    Err=SSD1306_SendCommand(SSD1306_SEG_REMAP | 0x1); // rotate screen 180
    printf("\n\r SSD1306_SEG_REMAP  :%x",Err);

    Err=SSD1306_SendCommand(SSD1306_COM_SCAN_DEC); // rotate screen 180
    printf("\n\r SSD1306_COM_SCAN_DEC  :%x",Err);

    Err=SSD1306_SendCommand(SSD1306_SET_COMPINS);                    // 0xDA
    SSD1306_SendCommand(0x12);
    printf("\n\r SSD1306_SET_COMPINS  :%x",Err);

    Err=SSD1306_SendCommand(SSD1306_SET_CONTRAST);                   // 0x81
    SSD1306_SendCommand(0xCF);
    printf("\n\r SSD1306_SET_CONTRAST  :%x",Err);

    Err=SSD1306_SendCommand(SSD1306_SET_PRECHARGE);                  // 0xd9
    SSD1306_SendCommand(0xF1);
    printf("\n\r SSD1306_SET_PRECHARGE  :%x",Err);

    Err=SSD1306_SendCommand(SSD1306_SET_VCOM_DETECT);                 // 0xDB
    SSD1306_SendCommand(0x40);
    printf("\n\r SSD1306_SET_VCOM_DETECT  :%x",Err);

    Err=SSD1306_SendCommand(SSD1306_DISPLAY_ALL_ON_RESUME);           // 0xA4
    printf("\n\r SSD1306_DISPLAY_ALL_ON_RESUME  :%x",Err);

    Err=SSD1306_SendCommand(SSD1306_DISPLAY_NORMAL);                 // 0xA6
    printf("\n\r SSD1306_DISPLAY_NORMAL  :%x",Err);

    Err=SSD1306_SendCommand(SSD1306_DISPLAY_ON);                     //switch on OLED
    printf("\n\r SSD1306_DISPLAY_ON  :%x",Err);

    return 1;
}
////////////////////////////////////////////////////////////////////////////////
uint8 SSD1306_Init(void)
{
    uint8 Err=0;
    Err=SSD1306_SendCommand(SSD1306_DISPLAY_OFF);     //display off
    printf("\n\rInit\n\r1:%x",Err);
    delay_ms(5);
    Err=SSD1306_SendCommand(SSD1306_DISPLAY_ON);      //display on
    printf("\n\r2:%x",Err);
    delay_ms(5);
    Err=SSD1306_SendCommand(SSD1306_DISPLAY_NORMAL);  //Set Normal Display (default)
    printf("\n\r3:%x",Err);

    return 1;
}
////////////////////////////////////////////////////////////////////////////////
uint8 SSD1306_SendCommand(uint8 Command)
{
uint8 ACK1=0, ACK2=0, ACK3=0;

    i2c_start();
    ACK1 = i2c_write( 0x78);

    ACK2 = i2c_write(SSD1306_Command_Mode);
    ACK2 <<= 1;

    ACK3 = i2c_write(Command);  // Data to device
    ACK3 <<= 2;

    i2c_stop();         // Restart

    return (ACK1 | ACK2 | ACK3);
}

////////////////////////////////////////////////////////////////////////////////
uint8 SSD1306_SendData(uint8 Data)
{
    uint8 ACK1=0, ACK2=0, ACK3=0;

    i2c_start();
    i2c_write(SSD1306_Addres_Write);        // Device address
    i2c_write(SSD1306_Data_Mode);
    i2c_write(Data);                        // Data to device
    i2c_start();                            // Restart
    
    return (ACK1 || ACK2 || ACK3);
}

////////////////////////////////////////////////////////////////////////////////
void SSD1306_setBrightness(uint8 Brightness)
{
    SSD1306_SendCommand(SSD1306_SET_CONTRAST);
    SSD1306_SendCommand(Brightness);
}

////////////////////////////////////////////////////////////////////////////////
void SSD1306_setHorizontalMode()
{
    addressingMode = HORIZONTAL_MODE;
    SSD1306_SendCommand(0x20);          //set addressing mode
    SSD1306_SendCommand(0x00);          //set horizontal addressing mode
}

////////////////////////////////////////////////////////////////////////////////
void SSD1306_setPageMode()
{
    addressingMode = PAGE_MODE;
    SSD1306_SendCommand(0x20);          //set addressing mode
    SSD1306_SendCommand(0x02);          //set page addressing mode
}

////////////////////////////////////////////////////////////////////////////////
void SSD1306_setTextXY(uint8 Row, uint8 Column)
{
    SSD1306_SendCommand(0xB0 + Row);            //set page address
    SSD1306_SendCommand(0x00 + (8*Column & 0x0F));  //set column lower address
    SSD1306_SendCommand(0x10 + ((8*Column>>4)&0x0F));   //set column higher address
}
////////////////////////////////////////////////////////////////////////////////
void SSD1306_clearDisplay()
{
  uint8 i,j;
  SSD1306_sendCommand(SSD1306_DISPLAY_OFF);   //display off
  for(j=0;j<8;j++)
  {
    SSD1306_setTextXY(j,0);
    {
      for(i=0;i<16;i++)  //clear all columns
      {

        SSD1306_putChar(' ');
      }
    }
  }
  SSD1306_sendCommand(SSD1306_DISPLAY_ON);    //display on
  SSD1306_setTextXY(0,0);
}
////////////////////////////////////////////////////////////////////////////////
void SSD1306_putChar(uint8 C)
{
    uint8 i=0;

    //Ignore non-printable ASCII characters.
    //This can be modified for multilingual font.
    if(C < 32 || C > 127) 
    {
        C=' '; //Space
    }   
    for(i=0;i<8;i++)
    {
       //read bytes from code memory
       SSD1306_sendData(BasicFont[C-32][i]); 
       //font array starts at 0, ASCII starts at 32. Hence the translation
    }
}
////////////////////////////////////////////////////////////////////////////////
void SSD1306_putString(char *StringP)
{
    char *StringL = 0;
    uint8 i=0;
    StringL = StringP;

    while(StringL[i])
    {
        SSD1306_putChar(StringL[i]);
        i++;
    }
}
////////////////////////////////////////////////////////////////////////////////
uint8 SSD1306_putNumber(signed long long_num)
{
  unsigned char char_buffer[10]="";
  unsigned char i = 0;
  unsigned char f = 0;


  if (long_num < 0)
  {
    f=1;
    SSD1306_putChar('-');
    long_num = -long_num;
  }
  else if (long_num == 0)
  {
    f=1;
    putChar('0');
    return f;
  }

  while (long_num > 0)
  {
    char_buffer[i++] = long_num % 10;
    long_num /= 10;
  }

  f=f+i;
  for(; i > 0; i--)
  {
    SSD1306_putChar('0'+ char_buffer[i - 1]);
  }
  return f;

}
////////////////////////////////////////////////////////////////////////////////
void SSD1306_drawBitmap(uint8 *bitmaparray, uint8 bytes)
{
  char localAddressMode = addressingMode;
  if(addressingMode != HORIZONTAL_MODE)
  {
      //Bitmap is drawn in horizontal mode
      SSD1306_setHorizontalMode();
  }

  for(int i=0;i<bytes;i++)
  {
      SSD1306_sendData(bitmaparray[i]);
  }

  if(localAddressMode == PAGE_MODE)
  {
     //If pageMode was used earlier, restore it.
     SSD1306_setPageMode();
  }

}
////////////////////////////////////////////////////////////////////////////////
void SSD1306_setHorizontalScrollProperties(int1 direction, uint8 startPage, uint8 endPage, uint8 scrollSpeed)
{
/*
Use the following defines for 'direction' :
 Scroll_Left
 Scroll_Right
Use the following defines for 'scrollSpeed' :
 Scroll_2Frames
 Scroll_3Frames
 Scroll_4Frames
 Scroll_5Frames
 Scroll_25Frames
 Scroll_64Frames
 Scroll_128Frames
 Scroll_256Frames
*/

   if(Scroll_Right == direction)
   {
        //Scroll Right
        SSD1306_sendCommand(0x26);
   }
   else
   {
        //Scroll Left
        SSD1306_sendCommand(0x27);

   }
    SSD1306_sendCommand(0x00);
    SSD1306_sendCommand(startPage);
    SSD1306_sendCommand(scrollSpeed);
    SSD1306_sendCommand(endPage);
    SSD1306_sendCommand(0x00);
    SSD1306_sendCommand(0xFF);
}

void SSD1306_activateScroll()
{
    SSD1306_sendCommand(SSD1306_Activate_Scroll_Cmd);
}

void SSD1306_deactivateScroll()
{
    SSD1306_sendCommand(SSD1306_Dectivate_Scroll_Cmd);
}

void SSD1306_setNormalDisplay()
{
    uint8 Err=0;
    Err=SSD1306_sendCommand(SSD1306_DISPLAY_NORMAL);
//    printf("\n\rsetNormalDisplay\n\r1:%x",Err);
}

void SSD1306_setInverseDisplay()
{
    SSD1306_sendCommand(SSD1306_DISPLAY_INVERT);
}