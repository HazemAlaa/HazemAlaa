sum = 0
x = 0
y = 0

print ('enter the number from [1-2-3-4-5-6-7-8-9-10]')

while True :

    if (x<=10 and y<=10 and sum <=100):
        print ('player one:')
        
        x = int (input())
        while (x < 1):
            print ('try again')
            x = int (input())
            while (x > 10):
                print ('try again')
                x = int (input())
        if (x <= 10):
            if (sum <= 100):
                
                while (x<= 10):
                    sum = sum + x
                    print ('the sume is:',sum)

                    break
                if (sum >= 100):
                   print ('player one is winner ')
                   break
                    
    if (x<=10 and y<=10 and sum <=100):
        print ('player two')
        y = int (input())
        while (y < 1):
               print ('try again')
               y = int (input())
               while (y > 10):
                  print ('try again')
                  y = int (input())
        if (y <= 10):
            if (sum <= 100):
                
                while (y <= 10):
                    sum = sum +y
                    print ('the sum is:',sum)

                    break
                if (sum >= 100):
                  print ('player two is winner ')
                  break


        
