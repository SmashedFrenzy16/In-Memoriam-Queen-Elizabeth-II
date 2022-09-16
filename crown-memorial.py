# This program is in commemoration to HM Queen Elizabeth II of the UK after her very tragic death. May she rest in peace.

def crown(length, height):

    for i in range(0, height):

        for j in range(0, length):

            if i == 0:

                if j == 0 or j == height or j == length - 1:

                    print("*", end = "")

                else:

                    print(" ", end = "")



            elif i == height - 1:

                print("-", end = "")

            elif ((j < i or j > height - i) and
                  (j < height + i or
                   j >= length - i)) :
                print ("#", end = "")
 
            else :
                print (" ", end = "")
         

        print()


length = 25

height = int((length - 1) / 2)

crown(length, height)

print("\nRIP Queen Elizabeth II. May she rest in peace. Long Live King Charles III!\n")