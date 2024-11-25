programa {
  funcao inicio() 
  {
    inteiro numerodig, resto
    numerodig = 0
    resto = 0
    cadeia par, impar

    escreva("Olá! Digite um número e diremos se este é par ou se é ímpar: ")
    leia(numerodig)

    resto = numerodig % 2
    se (resto != 0)
    {
      escreva("Você digitou o número ", numerodig, ". O número ", numerodig, " é um número ÍMPAR.\n")
    }
    senao
    {
      escreva("Você digitou o número ", numerodig, ". O número ", numerodig, " é um número PAR.\n")
    }

  }
}
