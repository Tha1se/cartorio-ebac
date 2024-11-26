programa 
{
  inclua biblioteca Util --> u

  funcao inicio() 
  {
    inteiro valor_inicial, valor_final, num_comp, num_usuario, resto, soma
    valor_inicial = 1
    valor_final = 5

    caracter parOUimpar

    escreva("Vamos informatizar o clássico par ou ímpar contra o computador?\n")


    faca
    {
    escreva("Se você deseja escolher PAR digite (P) ou, se deseja escolher ÍMPAR, digite (I): ")
    leia (parOUimpar)

    se(parOUimpar == 'I')
    {
		  escreva("Boa sorte! Você escolheu ímpar! \n")
		}

		senao se(parOUimpar == 'P')
    {
		  escreva("Boa sorte! Você escolheu par! \n")
		}

		senao
    {
		  escreva("Ops... Você digitou uma opção inválida! Verifique se digitou corretamente. Use letras maiúsculas.  \n")
    }
    }
    enquanto (parOUimpar != 'P' e parOUimpar != 'I')
  


    escreva("Agora, digite um número de 1 a 5 para começarmos: ")
    leia(num_usuario)

  se (num_usuario <=5)
      {
        num_comp = u.sorteia(1,5)
        soma = num_usuario + num_comp
        resto = soma %2  
  
        se((resto == 0) e (parOUimpar == 'P'))
        {
        escreva("Você escolheu o número ", num_usuario, " e o computador escolheu o número ", num_comp, ".\n")
        escreva("O resultado desta rodada foi ",soma, ", um número PAR! Você venceu! Obrigado por jogar conosco! \n")
        }

        senao se ((resto != 0) e (parOUimpar == 'I'))
        {
        escreva("Você escolheu o número ", num_usuario, " e o computador escolheu o número ", num_comp, ".\n")
        escreva("O resultado desta rodada foi ",soma, ", um número ÍMPAR! Você venceu! Obrigado por jogar conosco! \n")
        }

        senao
        {
          escreva("Você escolheu o número ", num_usuario, ", opção '", parOUimpar, "' e o computador sorteou o número ", num_comp, ". O resultado da rodada foi ", soma, ". Você perdeu!\n")
        }
      }

      senao
      {
        escreva("O número digitado é inválido, recomece.")
      }
  }
}
