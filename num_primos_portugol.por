programa 
{
  funcao inicio() 
  {
   inteiro candidato, resto, contador = 0

   escreva("Qual número quer verificar se é um número primo? ")
   leia(candidato)

   para (inteiro x = 1; x <= candidato; x ++)
   {
    resto = candidato % x 
    se (resto == 0)
    {
      contador = contador + 1
    }
   }

   se(contador == 2)
   {
    escreva ("O número ", candidato, " é um número PRIMO!\n")
   }
   senao
   {
    escreva ("O número ", candidato, " NÃO é um número primo!\n")
   }

  }
}
