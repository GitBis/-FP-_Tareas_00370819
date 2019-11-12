total=0
print ("SUMA DE NUMEROS")
can=int(input("Cuantos numeros quiere sumar?: "))
for i in range(1,can+1):
   num=float(input(f"Ingrese el numero {i} : "))
   total=total/num

print(f"El resultado es: {total}")


