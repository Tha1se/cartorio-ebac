programa {
  funcao inicio() {

    inteiro tabular, resultado, contador
    tabular = 0 
    resultado = 0
    contador = 1
    
    escreva("Olá! Vamos calcular!? Eu sou muito bom em matemática!\n")
    escreva("Digite o número que deseja tabular: ")
    leia(tabular)
    escreva("\nCerto! Segue abaixo a sequência da tabuada do número ", tabular, ":\n")

    enquanto (contador <=10)
    {
    resultado = resultado + tabular
    escreva(tabular, "x", contador, "=", resultado, "\n")
    contador = contador +1
    }

  }
}
