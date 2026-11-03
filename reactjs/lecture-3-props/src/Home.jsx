import React from 'react'

const Home = ({username,color,userdetails,users}) => {
  return (
    <div>
        <h1>Home Page :- {username}</h1>
        
        <ul>
          {

              color.map((c)=>{
                return (
                    <li>{c}</li>
                )
              })

          }
        </ul>

        <p>Name :- {userdetails.name}</p>
        <p>Age :- {userdetails.age}</p>
        <hr />
        <h1 align="center">Users Details</h1>
        <table align='center' border="1" width="500">
            <tr>
              <th>ID</th>
              <th>Name</th>
              <th>Age</th>
            </tr>
            <tbody>

              {
                users.map((val)=>{
                  const {id,name,age} = val
                  return (
                      <tr>
                        <td>{id}</td>
                        <td>{name}</td>
                        <td>{age}</td>
                      </tr>
                  )
                })
              }

            </tbody>
        </table>


    </div>
  )
}

export default Home
