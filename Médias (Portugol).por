programa {
  funcao inicio() 
  {
    real nota1, nota2, media

    escreva("Ol�! Vamos calcular a sua m�dia. \n\n")

    faca
    { 
      escreva("Informe a sua primeira nota: ")
      leia(nota1)

      se (nota1 < "0" ou nota1 > "10")
      { escreva("N�mero inv�lido. Recomece. ")}

      senao 
      {escreva("Sua primeira nota foi ", nota1, ".")}
    }
      enquanto (nota1 < '0' ou nota1 > "10")

    faca
    {
      escreva(" Agora, informe a sua segunda nota: ")
      leia(nota2)

      se (nota2 < "0" ou nota2 > "10")
      { escreva("N�mero inv�lido. Recomece. ")}

      senao
      {escreva("Sua segunda nota foi ", nota2, ".\n")}
    }
    enquanto (nota2 <'0' ou nota2 > "10")
    
    limpa()

    media = (nota1+nota2) / 2
    escreva("Com base nas notas informadas, sua m�dia foi ", media, ". \n")

    se (media >=8)
    {
      escreva("Parab�ns! Voc� foi aprovado (a)!\n\n")
    }

    se (media >= 5 e media <= 7)
    {
      escreva("Ops.. voc� est� em recupera��o! Bons estudos!\n\n")
    }
    

    se (media >= 0 e media <= 4)
    {
      escreva("Voc� foi reprovado (a)!\n\n")
    }
  }
}
