SELECT NOME_DO_PRODUTO, PRECO_DE_LISTA FROM TABELA_DE_PRODUTOS
WHERE SABOR = 'Manga';

SELECT NOME_DO_PRODUTO, PRECO_DE_LISTA, 
(CASE WHEN PRECO_DE_LISTA >= 12 THEN 'PRODUTO CARO'
      WHEN PRECO_DE_LISTA >= 7 AND PRECO_DE_LISTA < 12 THEN 'PRODUTO EM CONTA'
	  ELSE 'PRODTO BARATO' END) AS CLASSIFICACAO
FROM TABELA_DE_PRODUTOS
WHERE SABOR = 'Manga'
ORDER BY CLASSIFICACAO;


SELECT NOME_DO_PRODUTO, PRECO_DE_LISTA, 
(CASE WHEN PRECO_DE_LISTA >= 12 THEN 'PRODUTO CARO'
      WHEN PRECO_DE_LISTA >= 7 AND PRECO_DE_LISTA < 12 THEN 'PRODUTO EM CONTA'
	  ELSE 'PRODTO BARATO' END) AS CLASSIFICACAO
FROM TABELA_DE_PRODUTOS
ORDER BY CLASSIFICACAO;

--CODIGO ERRADO
SELECT 
(CASE WHEN PRECO_DE_LISTA >= 12 THEN 'PRODUTO CARO'
      WHEN PRECO_DE_LISTA >= 7 AND PRECO_DE_LISTA < 12 THEN 'PRODUTO EM CONTA'
	  ELSE 'PRODTO BARATO' END) AS CLASSIFICACAO, COUNT (*) AS NUMERO_DE_PRODUTOS
FROM TABELA_DE_PRODUTOS
GROUP BY CLASSIFICACAO;
--CODIGO ERRADO

SELECT 
(CASE WHEN PRECO_DE_LISTA >= 12 THEN 'PRODUTO CARO'
      WHEN PRECO_DE_LISTA >= 7 AND PRECO_DE_LISTA < 12 THEN 'PRODUTO EM CONTA'
	  ELSE 'PRODTO BARATO' END) AS CLASSIFICACAO, COUNT (*) AS NUMERO_DE_PRODUTOS
FROM TABELA_DE_PRODUTOS
GROUP BY (CASE WHEN PRECO_DE_LISTA >= 12 THEN 'PRODUTO CARO'
      WHEN PRECO_DE_LISTA >= 7 AND PRECO_DE_LISTA < 12 THEN 'PRODUTO EM CONTA'
	  ELSE 'PRODTO BARATO' END);


--INICIO DESAFIO

SELECT * FROM TABELA_DE_CLIENTES

SELECT NOME, 
(CASE WHEN LIMITE_DE_CREDITO >= 150000 THEN 'CLIENTE GRANDE'
      WHEN LIMITE_DE_CREDITO BETWEEN 110000 AND 150000 THEN 'CLIENTE MEDIO'
	  ELSE 'CLIENTE PEQUENO' END) AS CLASSIFICACAO
FROM TABELA_DE_CLIENTES

--OPCAO 2

SELECT NOME, 
(CASE WHEN LIMITE_DE_CREDITO >= 150000 THEN 'CLIENTE GRANDE'
      WHEN LIMITE_DE_CREDITO >= 110000 AND LIMITE_DE_CREDITO < 150000 THEN 'CLIENTE MEDIO'
	  ELSE 'CLIENTE PEQUENO' END) AS CLASSIFICACAO
FROM TABELA_DE_CLIENTES

--FIM DESAFIO 