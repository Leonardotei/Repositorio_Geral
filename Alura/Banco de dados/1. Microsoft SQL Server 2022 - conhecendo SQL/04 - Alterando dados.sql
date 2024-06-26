SELECT [NOME] AS [NOME DO CLIENTE], [ESTADO] AS [UF], [PRIMEIRA COMPRA]
FROM [TABELA DE CLIENTES]
WHERE [PRIMEIRA COMPRA] = 1;

SELECT * FROM [TABELA DE PRODUTOS]
WHERE [PRECO DE LISTA] = 7.00;

SELECT * FROM [TABELA DE PRODUTOS]
WHERE [PRECO DE LISTA] > 7.00;

SELECT * FROM [TABELA DE PRODUTOS]
WHERE [PRECO DE LISTA] <= 7.00;

SELECT * FROM [TABELA DE PRODUTOS]
WHERE [EMBALAGEM] > 'Lata';

SELECT DISTINCT [EMBALAGEM] FROM [TABELA DE PRODUTOS];

SELECT * FROM [TABELA DE CLIENTES]

SELECT [NOME], [DATA DE NASCIMENTO] 
FROM [TABELA DE CLIENTES]
WHERE [DATA DE NASCIMENTO] > '1995-12-31';

SELECT [NOME], [DATA DE NASCIMENTO] 
FROM [TABELA DE CLIENTES]
WHERE YEAR ([DATA DE NASCIMENTO]) = '1995';


SELECT [NOME], [BAIRRO] 
FROM [TABELA DE CLIENTES]
WHERE [BAIRRO] = 'Copacabana' OR [BAIRRO] = 'Tijuca';

SELECT [NOME], [ESTADO], [PRIMEIRA COMPRA]
FROM [TABELA DE CLIENTES]
WHERE [ESTADO] = 'SP' AND [PRIMEIRA COMPRA] = 1;

--INICIO DESAFIO

--1 - Liste os vendedores que possuem comissão menor ou igual a 8%.
SELECT * FROM [TABELA DE VENDEDORES]

SELECT * FROM [TABELA DE VENDEDORES]
WHERE [PERCENTUAL COMISSAO] <= 0.08;


--2 - Liste os produtos que custam menos de 6 reais e estão disponíveis em lata.
SELECT * FROM [TABELA DE PRODUTOS]

SELECT * FROM [TABELA DE PRODUTOS]
WHERE [PRECO DE LISTA] < 6.00 AND [EMBALAGEM] = 'Lata';


--3 - Mostre todos os clientes que não são de São Paulo nem do Rio de Janeiro.
SELECT * FROM [TABELA DE CLIENTES]

SELECT * FROM [TABELA DE CLIENTES]
WHERE [ESTADO] <> 'SP' AND [ESTADO] <> 'RJ';


SELECT * FROM [TABELA DE CLIENTES]
WHERE NOT ([ESTADO] = 'SP' OR [ESTADO] = 'RJ');


--FIM DESAFIO


SELECT * FROM [TABELA DE PRODUTOS]

UPDATE [TABELA DE PRODUTOS]
SET [PRECO DE LISTA] = [PRECO DE LISTA] * 0.9
WHERE [EMBALAGEM] = 'Lata';

UPDATE [TABELA DE PRODUTOS]
SET [EMBALAGEM] = 'Garrafa', [PRECO DE LISTA] = 8.10
WHERE [CODIGO DO PRODUTO] = '1088126';


DELETE FROM [TABELA DE PRODUTOS]
WHERE [CODIGO DO PRODUTO] = '1004327';