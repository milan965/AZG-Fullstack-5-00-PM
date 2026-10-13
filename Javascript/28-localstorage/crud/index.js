
let users = localStorage.getItem('users') ? JSON.parse(localStorage.getItem('users')) : []


const getUsers = () => {
   
    let allusers = localStorage.getItem('users') ? JSON.parse(localStorage.getItem('users')) : []

    let data = "";
    allusers.map((val)=>{
        
        data += `
                    <tr>
                        <td>${val.id}</td>
                        <td>${val.name}</td>
                        <td>${val.age}</td>
                        <td>
                            <button onclick="deleteUser(${val.id})">Delete</button>
                        </td>
                    </tr>
                `
        
    })
    document.getElementById('usersrecord').innerHTML = data;
    

}
getUsers();

const saveRecord = () => {
    let name = document.getElementById('name').value;
    let age = document.getElementById('age').value;
    
    let obj = {
        id : Math.floor(Math.random()*10000),
        name,
        age
    }
   
    users.push(obj)
    localStorage.setItem('users',JSON.stringify(users))
    alert("User Add")
    getUsers();
    document.getElementById('name').value = "";
    document.getElementById('age').value = "";
}

const  deleteUser = (id) => {
    
     let allusers = localStorage.getItem('users') ? JSON.parse(localStorage.getItem('users')) : []

     let deleteRecord = allusers.filter((v)=>{
        
        return v.id != id
        
     })

    localStorage.setItem('users',JSON.stringify(deleteRecord));
    alert("User delete")
    getUsers();
     
    
}