curso={
    "codigo":"",
    "nome":"",

    "aluno":[]
}
curso["codigo"]=input("informe o codigo do curso: ")
curso["nome"]=input("informe o nome do curso: ")

aluno={
    "cpf":"",
    "nome":"",
    "data_nascimento":"",
    "telefone":"",
    "email":""
}
aluno["cpf"]=input("informe o cpf do aluno: ")
aluno["nome"]=input("informe o nome do aluno: ")
aluno["data_nascimento"]=input("informe a data de nascimento do aluno: ")
aluno["telefone"]=input("informe o telefone do aluno: ")
aluno["email"]=input("informe o email do aluno: ")
curso["aluno"].append(aluno) 
print("aluno cadastrado com sucesso!")
print(f"curso: {curso['codigo']} - {curso['nome']}")