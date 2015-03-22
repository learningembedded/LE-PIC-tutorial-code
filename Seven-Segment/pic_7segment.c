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
  void main()                                                          //Main function
  {
     int i;                                                            // Declare a variable used for indexing
     int  arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67}; //Values for each digit stored in an array
     TRISD=0;                                                          // Set PORTD as output
     PORTD=0;                                                          // Set PORTD = 0
     while(1)                                                          // Infinite loop
     {
             for(i=0;i<10;i++)
             {
                   PORTD=arr[i];                                       // put the value of array to the 7 segment
                   delay_ms(300);                                      // delay of 300 milisecond
             }
     }
     
  }
