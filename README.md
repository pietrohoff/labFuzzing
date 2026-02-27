# 🧪 Fuzzing Lab -- OWASP Juice Shop

Este laboratório foi desenvolvido para prática de técnicas de **Fuzzing,
e Testes de Segurança em Aplicações Web**, utilizando o **OWASP Juice Shop** 
como alvo e uma máquina dedicada para execução das ferramentas ofensivas.

------------------------------------------------------------------------

## 🏗️ Arquitetura do Laboratório

O ambiente é composto por duas máquinas:

### 🎯 Máquina Alvo

-   OWASP Juice Shop
-   Node.js / Express
-   Executando em container Docker
-   Exposta apenas na rede interna do laboratório

### 🛠️ Máquina de Testes (Attacker)

-   Kali Linux (Docker)
-   SecLists
-   Curl
-   Ffuf
------------------------------------------------------------------------

## 🌐 Topologia

    [ Kali / Attacker ]
            │
            │ HTTP Requests (Fuzzing)
            ▼
    [ Juice Shop Container ]

Ambas as máquinas estão na mesma rede Docker isolada.

------------------------------------------------------------------------

## 🧰 Ferramentas Utilizadas

### 🔹 Ffuf

Ferramenta principal para: - Descoberta de endpoints - Enumeração de
parâmetros - Fuzzing de métodos HTTP - Fuzzing de payloads - Enumeração
de IDs

### 🔹 SecLists

Wordlists utilizadas para: - Content discovery - Parameter discovery -
Login bypass - LFI - XSS - HTTP methods

### 🔹 Curl

Utilizado para: - Requisições manuais - Validação de respostas - Análise
de headers - Confirmação de impacto

------------------------------------------------------------------------

