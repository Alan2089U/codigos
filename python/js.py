import sys
obj={
    "nome": "Alberto",
    "sobrenome":"biason"
}
nome_completo=obj["nome"]+""+obj["sobrenome"]
print(nome_completo)
obj["nome"]=input("informe o nome: ")
obj["sobrenome"]=input("informe o sobrenome: ")
print(obj["sobrenome"]+","+obj["nome"])