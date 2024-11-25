programa {
  funcao inicio(){
    real peca, padrao
    peca = 0
    padrao = 25

    escreva("Olá! Serei sua assistente de comparação de medidas das tubulações hidráulicas cadastradas.\nInforme o comprimento da peça que deseja comparar com o padrão: ")
    leia(peca)

    se (peca == padrao){
    escreva("A peça informada mede ", peca, " centímetros e ESTÁ NO PADRÃO de 25 centímetros.\n")
    }
    se (peca < padrao){
      escreva("A medida da peça informada (", peca, "cm) é INFERIOR AO PADRÃO de 25 centímetros.\n")
    }
    se (peca > padrao){
      escreva("A medida da peça informada (", peca, "cm) é SUPERIOR AO PADRÃO de 25 centímetros.\n")
    }

    escreva("\nObrigada por usar nosso programa!\n")

    }

  }
}
