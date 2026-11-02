import React from 'react'

const Header = () => {

   const pages = ["Home","About","Products","Services","Contact","Mahek"]

  return (
    <div>
        <h1 style={{color:'red'}}>Header</h1>
        <ul>
           
           {
                pages.map((p)=>{
                    return (
                        <li>{p}</li>
                    )
                })
           }

            
        </ul>
    </div>
  )
}

export default Header
