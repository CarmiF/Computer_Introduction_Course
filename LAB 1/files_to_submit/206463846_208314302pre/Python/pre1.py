#=================== Source objects ================
input_arr1 = [0,6,4,6,3,8,4,6]
input_arr2 = [0,8,3,1,4,3,0,2]
SIZE = len(input_arr1)
result = 0
sum_arr1 = 0
sum_arr2 = 0
#================== Target objects =================
output_arr1 = []
output_arr2 = []

#================= Algorithm code ==================
for i in range(SIZE):
  sum_arr1 += input_arr1[i]
  sum_arr2 += input_arr2[i]

  output_arr1.append(input_arr1[i] + input_arr2[i])  # ADD operation
  output_arr2.append(input_arr1[i] | input_arr2[i])  # OR operation
if sum_arr2 % 2 == 0 and sum_arr1 % 2 == 0:
  if sum_arr1 < sum_arr2:
    result = sum_arr1
  else:
    result = sum_arr2
else:
    if sum_arr1 % 2 == 0:
      result = sum_arr1
    if sum_arr2 % 2 == 0:
      result = sum_arr2
#===================================================
#                Output Printing
#===================================================


# Output integer format Printing
print(result)

print("Integer format Printing")
print("output_arr1",output_arr1)
print("output_arr2",output_arr2)

# Output Hex format Printing
print("\nHex format Printing")
print("output_arr1",[hex(x) for x in output_arr1])
print("output_arr2",[hex(x) for x in output_arr2])
