# 🌱 Indicador de Qualidade do Solo para Plantio

## 📝 Resumo
Este projeto implementa um sistema eletrônico de baixo custo para monitorar a **umidade do solo** e automatizar a irrigação. Utilizando **Arduino Uno**, sensores e atuadores simples, o sistema fornece indicações visuais e sonoras, facilitando a tomada de decisões relacionadas à irrigação e promovendo práticas agrícolas sustentáveis.

---

## ⚙️ Funcionalidades
- **Monitoramento de umidade do solo** com sensor analógico.  
- **Classificação do solo** em três níveis: seco, úmido ou ideal.  
- **Indicação visual** usando LEDs de cores diferentes:  
  - Vermelho: solo seco  
  - Amarelo: solo úmido  
  - Verde: solo ideal  
- **Alertas sonoros** com buzzer quando o solo está seco.  
- **Ativação automática de bomba de irrigação** quando o solo está seco.  
- Fácil de usar, com **setup simples** e manutenção mínima.

---

## 🛠️ Componentes do Sistema
- Arduino Uno (ou compatível)  
- Sensor de umidade do solo  
- LEDs (vermelho, amarelo e verde)  
- Buzzer piezoelétrico  
- Motor/bomba de irrigação  
- Fonte de alimentação para Arduino e motor  

---

## ⚙️ Funcionamento do Sistema
1. O sensor mede continuamente a umidade do solo.  
2. O Arduino processa os dados e atualiza os LEDs de acordo com o nível de umidade.  
3. Caso o solo esteja seco (LED vermelho), o buzzer alerta o usuário e a bomba de água é ativada automaticamente.  
4. Se o solo estiver úmido ou ideal, o sistema mantém LEDs correspondentes acesos e mantém buzzer e bomba desligados.  

### 📌 Passos Diários:
1. Inserir o sensor no solo na profundidade adequada para o tipo de planta.  
2. Observar os LEDs para verificar a condição do solo:  
   - **Verde:** solo ideal  
   - **Amarelo:** solo úmido  
   - **Vermelho:** solo seco (buzzer ativo e bomba ligada)  
3. Garantir que a bomba esteja conectada à fonte de água.

---

## 🔧 Manutenção
- Limpar o sensor periodicamente para leituras precisas.  
- Verificar funcionamento de LEDs, buzzer e bomba, substituindo componentes defeituosos quando necessário.  

---

## 💻 Tinkercad
https://www.tinkercad.com/things/1PRYHHqPtSn-indicador-de-qualidade-do-solo
  delay(1000);
}
