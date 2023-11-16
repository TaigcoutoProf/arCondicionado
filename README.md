# Projeto ventilador com Arduino 

O seguinte projeto foi executado em um dia de muito calor na região do Vale do Paraíba, como objetivo de dar vida a um projeto físico de refigeração para um esquilo da Mongólia (gerbil) chamado Yoda.

Na última semana (novembro de 2023), uma onda de ar quente invadiu as regiões do Brasil e algumas pessoas e animais sofreram com as altas temperaturas.

Ao encontrar meu esquilo deitado no canto da sacada do meu apartamento, como corpinho mole, decidi começar o projeto de ar condicionado para deixá-lo mais confortável.

## Protótipo

A primeira etapa de desenvolvimento do projeto foi a busca por componentes para o protótipo inicial.

A placa Arduino UNO já estava disponível para o desenvolvimento do protótipo. O segundo componente foi uma ventoinha retirada de um notebook velho que eu tinha em casa. O terceiro componente foi uma bateria de 9V, comprada com o objrtivo de manter o projeto funcionando de forma portátil.

### Componentes Utilizados
- 1 placa Arduino UNO;
- 1 ventoinha de 5V;
- 1 bateria de 9V;

## Planejamento no Tinkercad

O código foi testado primeiramente na plataforma Tinkercad. Como o componente da ventoinha não é um componente dispinível na plataforma, foi utilizado um motor DC (que possui corrente contínua assim como a ventoinha). Porém a conexão do motor é limitada a *positivo* e *negativo*, somente. Para representar as 3 conexões dispovíveis na ventoinha (positivo, negativo e digital), foi utilizado um potenciômetro, ligado diretamente ao motor DC.

### Esquema final

![](img/sketch.png)

