programa {
  funcao inicio() {

    real cotdolar, realnacional, montante, resultado
    cotdolar = 0 //cotação do dólar
    realnacional = 1
    montante = 0 //valor em dólar ou em real a ser convertido para outra moeda
    resultado = 0
    
    inteiro opcao

    escreva("Olá! Vou te auxiliar a fazer a conversão de valores entre dólares e reais.\n")
    escreva("Primeiro, nos informe a cotação atualizada do dólar: ")
    leia(cotdolar)
    escreva("Ok, a cotação informada atualizada do dólar hoje é ", cotdolar, ". \n")

    escreva("Agora, digite 1 se deseja realizar a conversão de reais para dólares ou 2 se deseja realizar a conversão de dólares para reais: ")
    leia(opcao)
    escreva("Você escolheu a opção ", opcao, ". ")

    se (opcao==1)
    {
      escreva("Digite o valor em reais a ser convertido para dólares: ")
      leia(montante)
      resultado = montante/cotdolar
      escreva("O montante informado em reais, se convertido para a cotação atual do dólar, resultará em ", resultado, " dólares.")
    }
    senao se (opcao==2)
    {
      escreva("Digite o valor em dólares a ser convertido para reais: ")
      leia(montante)
      resultado = montante * cotdolar
      escreva("O montante informado em dólares, se convertido para reais, resultará em ", resultado, " reais.")
    }

  }
}
