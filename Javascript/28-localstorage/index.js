
let students = [
    {
        id:1,
        name:"ajay",
        course:"web design"
    },
    {
        id:2,
        name:"jay",
        course:"full stack development"
    },
    {
        id:3,
        name:"kishan",
        course:"data analysis"
    },
    {
        id:4,
        name:"hardik",
        course:"python"
    }
]
 
// localStorage.setItem('users',JSON.stringify(students))


const getRecord = () => {
//    let all = JSON.parse(localStorage.getItem('users'))
   
   let tbl = "";

   students.map((v)=>{
   
        tbl += `
                    <tr>
                        <td>${v.id}</td>
                        <td>${v.name}</td>
                        <td>${v.course}</td>
                    </tr>
                `
    
   })

   document.getElementById('usersrecord').innerHTML = tbl;
   
   
}

getRecord();

const saveRecord = () => {
    let name = document.getElementById('name').value;
    let course = document.getElementById('course').value;
    
    let obj = {
        id : Math.floor(Math.random()*100000),
        name : name,
        course : course
    }

    students.push(obj)
    alert("Record add");
    getRecord();
    
    
    
}