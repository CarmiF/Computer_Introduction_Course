#=================== Source objects ================
input_arr1 = [0,6,4,6,3,8,4,6]
input_arr2 = [0,8,3,1,4,3,0,2]
SIZE = len(input_arr1)
#================== Target objects =================
num = 0
#================= Algorithm code ==================
for i in range(SIZE):
  num += (max(input_arr1[i], input_arr2[i]))  
#===================================================
#                Output Printing
#===================================================
# Output integer format Printing
print("Integer format Printing")
print(num)

# Output Hex format Printing
print("\nHex format Printing")
print("Num is:",hex(num))
