op  = input("inserisci operazione (+,-,*,/): ")
num1  = int(input("inserisci numero: "))
num2  = int(input("inserisci numero: "))

res = ""

if op == "+":
    res = num1 + num2
elif op == "-":
    res = num1 - num2
elif op == "*":
    res = num1 * num2
elif op == "/":
    res = num1 / num2
else:
    print("Errore")

if res != "":
    print(num1, op, num2, "=", res)