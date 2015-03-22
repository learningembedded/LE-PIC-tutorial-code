/*
 Author: LearningEmbedded.com
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this code and associated documentation files , to use, copy, modify, merge,
 publish, distribute when you agree to the following conditions:
 Attribution — You must give appropriate credit, provide a link to the license, 
               and indicate if changes were made. You may do so in any reasonable
               manner, but not in any way that suggests the licensor endorses you 
               or your use.
 No additional restrictions — You may not apply legal terms or technological 
                               measures that legally restrict others from doing
                               anything the license permits.
*/

// http://learningembedded.com /
 void main()                                                           // Main function
 {
     int i,j,k,l;                                                      // Declare a variables used for indexing
     int  arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67}; // Values for each digit stored in an array
     TRISD=0;                                                          // Set PORTD as output
     TRISC=0;                                                          // Set PORTC as output
     PORTC=0xff;                                                       // Set all Pins of PORTC as 1
     PORTD=0;                                                          // Set portD = 0;
     while(1)
     {
            for(l=0;k<10;l++)                                          // Nested loops
            {
            for(k=0;k<10;k++)
            {
            for(j=0;j<10;j++)
            {
            for(i=0;i<10;i++)
            {        PORTC.F4=1;
                     PORTC.F5=1;
                     PORTC.F6=1;
                     PORTC.F7=0;                                       // Switch on segment 4
                     PORTD=arr[i];                                     // Put the value of array to 7 segment using index i
                     Delay_ms(30);                                     // delay of 30 miliseconds
                     PORTC.F4=1;
                     PORTC.F5=1;
                     PORTC.F6=0;                                       // Switch on segment 3
                     PORTC.F7=1;
                     PORTD=arr[j];                                     // Put the value of array to 7 segment using index j
                     Delay_ms(30);                                     // delay of 30 miliseconds
                     PORTC.F4=1;
                     PORTC.F5=0;                                       // Switch on segment 2
                     PORTC.F6=1;
                     PORTC.F7=1;
                     PORTD=arr[k];                                     // Put the value of array to 7 segment using index k
                     Delay_ms(30);                                     // delay of 30 miliseconds
                     PORTC.F4=0;                                       // Switch on segment 1
                     PORTC.F5=1;
                     PORTC.F6=1;
                     PORTC.F7=1;
                     PORTD=arr[l];                                     // Put the value of array to 7 segment using index l
                     Delay_ms(30);                                     // delay of 30  miliseconds
            }
            }
            }
            }
     }
  }
 
 
 
 
