SELECT * FROM TABELA_DE_CLIENTES;

SELECT CIDADE, IDADE FROM TABELA_DE_CLIENTES ORDER BY CIDADE, IDADE;

SELECT CIDADE, SUM(IDADE) AS IDADE FROM TABELA_DE_CLIENTES GROUP BY CIDADE;

SELECT CIDADE, SUM(IDADE) AS IDADE, SUM(LIMITE_DE_CREDITO) AS CREDITO FROM TABELA_DE_CLIENTES GROUP BY CIDADE;

SELECT CIDADE, AVG(IDADE) AS IDADE, SUM(LIMITE_DE_CREDITO) AS CREDITO FROM TABELA_DE_CLIENTES GROUP BY CIDADE;

SELECT CIDADE, COUNT(*) AS NUMERO_DE_CLIENTES FROM TABELA_DE_CLIENTES GROUP BY CIDADE;

SELECT EMBALAGEM, COUNT(*) AS NUMERO_DE_CLIENTES FROM TABELA_DE_PRODUTOS
WHERE SABOR = 'Laranja' GROUP BY EMBALAGEM;


--INICIO DESAFIO
--Pergunto: Quantas vendas foram feitas com quantidade igual a 99 litros para o produto '1101035'?

SELECT COUNT(*) AS QUANTIDADE_VENDAS FROM ITENS_NOTAS_FISCAIS
WHERE CODIGO_DO_PRODUTO = '1101035' AND QUANTIDADE = 99;

--FIM DESAFIO