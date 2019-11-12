total=1
print ("MULTIPLICACION DE NUMEROS")
can=int(input("Cuantos numeros vas a multiplicar: "))
for i in range(1,can+1):
   num=float(input(f"Imgresa el numero {i}: "))
   total=total*num
print(f"El resultado es: {total}")
