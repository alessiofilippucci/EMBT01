op  = input("inserisci operazione (+,-,*,/): ")
num1  = int(input("inserisci numero: "))
num2  = int(input("inserisci numero: "))

res = ""

match op:
    case "+":
        res = num1 + num2
    case "-":
        res = num1 - num2
    case "*":
        res = num1 * num2
    case "/":
        res = num1 / num2
    case _:
        print("Errore")

if res != "":
    print(num1, op, num2, "=", res)