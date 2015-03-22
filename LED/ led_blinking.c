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
 
 void main()           // main function
 {
        PORTB =0;      // Initialise PORTB as 0
        TRISB =0;      // Set PORTB as output

        while(1)       // Infinite loop
        {
                PORTB = ~PORTB; // Invert the values
                                // if value is 1 change it to 0 & vice versa
                Delay_ms(1000); //  Delay  of 1 sec

        }
 }
