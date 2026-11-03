import Home from "./Home"

function App(){

  let name = 'jay'
  let color = ["red","green","blue"]
  let  obj = {
    id : 1,
    name : 'ajay',
    age : 21
  }


  let users = [
      {
        id : 1,
        name : 'amit',
        age : 21
      },
      {
        id : 2,
        name : 'hardik',
        age : 22
      },
      {
        id : 3,
        name : 'keyur',
        age : 22
      }
  ]

 

  return (
    
      <>

         <Home 
            username={name}
            color={color}
            userdetails={obj}
            users={users}
        />

          

      </>

    
    
  )

}

export default App
