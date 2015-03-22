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
 void main()
 {
        PORTB =0;      //Initialise PORTB as 0
        TRISB =0;      // Set PORTB as output


        while(1)       // Infinite loop
        {
                PORTB.F0 = 1;        // set PORTB pin 0 as 1
                Delay_ms(200);       // delay  of 200 milisecond
                PORTB=0;             // Set PORTB as 0
                PORTB.F1 = 1;        // set PORTB pin 1 as 1
                Delay_ms(200);       // delay  of 200 milisecond
                PORTB=0;             // Set PORTB as 0
                PORTB.F2 = 1;       // set PORTB pin 2 as 1
                Delay_ms(200);      // delay  of 200 milisecond
                PORTB=0;            // Set PORTB as 0
                PORTB.F3 = 1;       // set PORTB pin 3 as 1
                Delay_ms(200);      // delay  of 200 milisecond
                PORTB=0;            // Set PORTB as 0
        }
 }
